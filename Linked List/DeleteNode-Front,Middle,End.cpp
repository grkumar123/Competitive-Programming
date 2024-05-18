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
        count++;
    }
    return count;
}

Node *DeleteBeginning(Node *head)
{
    Node *temp = head->next;
    head = temp;
    return head;
}

Node *DeleteMiddle(Node *head, int len)
{
    int mid = len/2;
    int count = 0;
    Node *temp = head;
    while(temp != NULL && count < mid - 1)
    {
        temp = temp->next;
        count++;
    }
    if(temp != NULL)
    {
        Node *a = temp->next->next;
        temp->next = a;
    }
    return head;
}

Node *DeleteEnd(Node *head, int len)
{
    int count = 0;
    Node *temp = head;
    while(temp != NULL && count < len - 2)
    {
        temp = temp->next;
        count++;
    }
    if(temp->next != NULL)
    {
        Node *a = temp->next->next;
        temp->next = a;
    }
    return head;
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

        head = DeleteBeginning(head);
        cout << "Linked List : ", print(head);
        
        head = DeleteMiddle(head, len);
        cout << "Linked List : ", print(head);

        head = DeleteEnd(head, len);
        cout << "Linked List : ", print(head);
    }

    return 0;
}