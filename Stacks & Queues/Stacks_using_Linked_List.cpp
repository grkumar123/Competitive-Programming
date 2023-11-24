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
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Stack
{
    Node<T> *head;
    int size;
public:
    Stack()
    {
        head = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size==0;
    }

    void push(T element)
    {
        Node<T> *newData = new Node<T>(element);
        newData->next = head;
        head = newData;
        size++;
    }

    T pop()
    {
        if(isEmpty())
        {
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    T top()
    {
        if(isEmpty())
        {
            return 0;
        }
        return head->data;
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
        //Stack using Linked List
        Stack<char> S;
        S.push('g');
        S.push('y');
        S.push('a');
        S.push('n');
        
        cout << "Check Empty : " << S.isEmpty() << endl;
        cout << "Check Size Before : " << S.getSize() << endl;
        cout << "Top Element Before : " << S.top() << endl;
        cout << "Delete Element : " << S.pop() << endl;
        cout << "Check Size After : " << S.getSize() << endl;
        cout << "Top Element After : " << S.top() << endl;
    }

    return 0;
}