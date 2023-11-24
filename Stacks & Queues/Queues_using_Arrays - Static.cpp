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

//Queue using Arrays - Statically
class Queue
{
    int *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
public:
    Queue(int totalSize)
    {
        data = new int[totalSize];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = totalSize;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size==0;
    }

    void enqueue(int element)
    {
        if(size == capacity)
        {
            cout << "Queue is Full" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if(firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }

    int dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return INT_MIN;
        }
        int ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        return ans;
    }

    int front()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return INT_MIN;
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
        Queue q(5);
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50);
        
        cout << "Check Empty : " << q.isEmpty() << endl;
        cout << "Check Size Before : " << q.getSize() << endl;
        cout << "Front Element : " << q.front() << endl;
        cout << "Delete Element : " << q.dequeue() << endl;
        cout << "Delete Element : " << q.dequeue() << endl;
        cout << "Check Size After : " << q.getSize() << endl;
        cout << "Front Element : " << q.front() << endl;
    }

    return 0;
}