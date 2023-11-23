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

//Stacks using Arrays - Dynamically
class Stack
{
    int* data;
    int nextindex;
    int capacity;
public:
    Stack()
    {
        data = new int[4];
        nextindex = 0;
        capacity = 4;
    }

    int size()
    {
        return nextindex;
    }

    bool isempty()
    {
        return nextindex == 0;
    }

    void push(int element)
    {
        if(nextindex == capacity)
        {
            int* newData = new int[2*capacity];
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

    int pop()
    {
        if(isempty())
        {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        nextindex--;
        return data[nextindex];
    }

    int top()
    {
        if(isempty())
        {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
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
         Stack s;
         s.push(10);
         s.push(20);
         s.push(30);
         s.push(40);
         s.push(50);
         s.push(60);
         s.push(70);
         s.push(80);
         s.push(90);
         s.push(100);

         cout <<"Check Empty : " << s.isempty() << endl;
         cout << "Size : " << s.size() << endl;
         cout << "Top element : " << s.top() << endl;
         cout << "Pop element : " << s.pop() << endl;
         cout << "Size : " << s.size() << endl;
         cout << "Top element : " << s.top() << endl;
    }

    return 0;
}