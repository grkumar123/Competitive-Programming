#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <climits>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

template <typename T>
class Queue
{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
public:
    Queue()
    {
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = 5;
        data = new T[capacity];
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size==0;
    }

    void enqueue(T element)
    {
        if(size == capacity)
        {
            T *newData = new T[2*capacity];
            for(int i = firstIndex; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            for(int i = 0; i < firstIndex; i++)
            {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
            firstIndex = 0;
            nextIndex = capacity;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if(firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }

    T dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        int ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        return ans;
    }

    T front()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        return data[firstIndex];
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--)
    {
        Queue<char> q;                
        q.enqueue('g');
        q.enqueue('y');
        q.enqueue('a');
        q.enqueue('n');
        
        cout << "Check Empty : " << q.isEmpty() << endl;
        cout << "Check Size Before : " << q.getSize() << endl;
        cout << "Front Element : " << q.front() << endl;
        cout << "Delete Element : " << q.dequeue() << endl;
        cout << "Check Size After : " << q.getSize() << endl;
        cout << "Front Element : " << q.front() << endl;
    }

    return 0;
}