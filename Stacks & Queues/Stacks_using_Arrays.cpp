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

//Stacks using Arrays
class stacks
{
    int* data;
    int nextindex;
    int capacity;
public:
    stacks(int totalsize)
    {
        data = new int[totalsize];
        nextindex = 0;
        capacity = totalsize;
    }

    int size()
    {
        return nextindex;
    }

    bool isempty()
    {
        if(nextindex == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        //return nextindex == 0;
    }

    void push(int element)
    {
        if(nextindex == capacity)
        {
            cout << "Stack is Full" << endl;
            return;
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
         stacks s(5);

         s.push(3);
         s.push(5);
         s.push(7);
         s.push(79);
         s.push(68);

         cout <<"Check Empty : " << s.isempty() << endl;
         cout << "Size : " << s.size() << endl;
         cout << "Top element : " << s.top() << endl;
         cout << "Pop element : " << s.pop() << endl;
         cout << "Size : " << s.size() << endl;
         cout << "Top element : " << s.top() << endl;
    }

    return 0;
}