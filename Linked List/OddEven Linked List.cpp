#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <climits>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
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

    Node *head = NULL;
    Node *tail = NULL;

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
}

Node *OddEvenLL(Node *head)
{
    if(head == NULL)
    {
        return head;
    }

    Node *oddHead = NULL;
    Node *oddTail = NULL;
    Node *evenHead = NULL;
    Node *evenTail = NULL;

    while(head != NULL)
    {
        if(head->data % 2 != 0)
        {
            if(oddHead == NULL)
            {
                oddHead = head;
                oddTail = head;
            }
            else{
                oddTail->next = head;
                oddTail = oddTail->next;
            }
        }
        else
        {
            if(evenHead == NULL)
            {
                evenHead = head;
                evenTail = head;
            }
            else{
                evenTail->next = head;
                evenTail = evenTail->next;
            }
        }

        head = head->next;
    }

    if(oddHead == NULL)
    {
        return evenHead;
    }
    else{
        oddTail->next = evenHead;
    }

    if(evenHead != NULL)
    {
        evenTail->next = NULL;
    }

    return oddHead;
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
        print(head);
        
        cout << endl;

        head = OddEvenLL(head);
        print(head);
        
    }

    return 0;
}