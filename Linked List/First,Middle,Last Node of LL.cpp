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

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while(data != -1)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int LengthofLL(Node *head)
{
    int count = 0;
    while(head != NULL)
    {
        head = head->next;
        count += 1;
    }
    return count;
}

void FirstMiddleLastNodeofLL(Node *head, int len)
{
    int mid = len/2;
    int i = 1;
    while(head != NULL && i <= len)
    {
        if(i == 1)
        {
            cout << "First Element : " << head->data << endl;
        }

        if(i == mid)
        {
            cout << "Middle Element : " << head->data << endl;
        }

        if(head->next == NULL)
        {
            cout << "Last Element : " << head->data << endl;
        }

        head = head->next;
        i++; 
    }
}

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
        Node *head = takeInput();
        cout << "Linked List : ", print(head);
        int len = LengthofLL(head);
        FirstMiddleLastNodeofLL(head, len);
    }

    return 0;
}