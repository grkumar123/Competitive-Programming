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

Node *Intersection(Node *headA, Node *headB)
{
    unordered_map<Node*, int> mpp;
    while(headA != NULL)
    {
        mpp[headA]++;
        headA = headA->next;
    }

    while(headB != NULL)
    {
        if(mpp[headB] > 0)
        {
            return headB;
        }

        headB = headB->next;
    }

    return NULL;
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
        Node *headA = takeInput();
        print(headA);
        
        cout << endl;

        Node *headB = takeInput();
        print(headB);

        cout << endl;

        Node *ans = Intersection(headA, headB);

        if(ans == NULL)
        {
            cout << "No Intersection" << endl;
        }
        else
        {
            cout << "Intersection : " <<  ans->data << endl;
        }
    }

    return 0;
}