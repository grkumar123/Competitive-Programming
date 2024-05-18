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

void ithNodeofLL(Node *head, int i)
{
    int count = 1;
    while(head != NULL && count < i)
    {
        head = head->next;
        count += 1;
    }

    cout << "ith Node of Linked List : " << head->data << endl;

    /*
    //Another way of checking
    //Check if the current data is NULL or not
    if(head->data != NLL)
    {
        cout << "ith Node of Linked List : " << head->data << endl;
    }

    */
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
        int i = 5;
        ithNodeofLL(head, i);
    }

    return 0;
}