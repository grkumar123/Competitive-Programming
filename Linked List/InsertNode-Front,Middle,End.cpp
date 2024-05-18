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

Node *insertNodeBeginning(Node *head, int data)
{
    Node *newNode = new Node(data);
    //Beginning or 0th position
    newNode->next = head;
    head = newNode;
    return head;

}

Node *insertNodeMiddle(Node *head, int data, int len)
{
    Node *newNode = new Node(data);
    int mid = len/2;
    Node *temp = head;
    int count = 0;
    while(temp != NULL and count < mid - 1)
    {
        temp = temp->next;
        count++;
    }
    if(temp != NULL)
    {
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
    }
    return head;
}

Node *insertNodeEnd(Node *head, int data, int len)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    int count = 0;
    while(temp != NULL && count < len - 1)
    {
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL)
    {
        Node *a = NULL;
        temp->next = newNode;
        newNode->next = a;
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
        int data;
        cin >> data;

        int len = LengthofLL(head); //Length of a Linked List
        
        //Beginning
        head = insertNodeBeginning(head, data);
        print(head);
        
        //Middle
        head = insertNodeMiddle(head, data, len);
        print(head);

        //End
        head = insertNodeEnd(head, data, len);
        print(head);
        
    }

    return 0;
}