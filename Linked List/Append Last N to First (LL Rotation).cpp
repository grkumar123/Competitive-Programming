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

Node *LLRotation(Node *head, int n)
{
    if(n == 0 || head == NULL)
    {
        return head;
    }

    Node *fast = head;
    Node *slow= head;

    for(int i = 0; i < n; i++)
    {
        fast = fast->next;
        slow = slow->next;
    }

    while(fast->next != NULL)
    {
        fast = fast->next;
    }

    Node *newHead = slow->next;
    slow->next = NULL;
    fast->next = head;
    head = newHead;
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
        print(head);
        
        cout << endl;

        int n;
        cin >> n;

        head = LLRotation(head, n);
        print(head);
    }

    return 0;
}