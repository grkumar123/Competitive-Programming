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

//Stacks using Templates
template <typename T>
class Stack
{
    T* data;
    int nextindex;
    int capacity;
public:
    Stack()
    {
        capacity = 5;
        nextindex = 0;
        data = new T[capacity];
    }

    int size()
    {
        return nextindex;
    }

    bool isempty()
    {
        return nextindex == 0;
    }

    void push(T element)
    {
        if(nextindex == capacity)
        {
            T* newData = new T[2*capacity];
            for(int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;
        }
        data[nextindex] = element;
        nextindex++;
    }

    T pop()
    {
        if(isempty())
        {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        nextindex--;
        return data[nextindex];
    }

    T top()
    {
        if(isempty())
        {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return data[nextindex-1];
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
         Stack<char> s;
         s.push('a');
         s.push('b');
         s.push('c');
         s.push('d');
         s.push('e');
         s.push('f');
         s.push('g');

         cout <<"Check Empty : " << s.isempty() << endl;
         cout << "Size : " << s.size() << endl;
         cout << "Top element : " << s.top() << endl;
         cout << "Pop element : " << s.pop() << endl;
         cout << "Size : " << s.size() << endl;
         cout << "Top element : " << s.top() << endl;
    }

    return 0;
}