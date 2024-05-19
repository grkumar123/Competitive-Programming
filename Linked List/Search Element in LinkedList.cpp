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

int SearchElement(Node *head, int num)
{
    Node *temp = head;
    while(temp != NULL)
    {
        if(temp->data == num)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
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

        int num = 55;

        int ans = SearchElement(head, num);

        if(ans == 1)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
        
    }

    return 0;
}