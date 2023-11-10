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

Node *Input()
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

int length(Node *head)
{
    int count = 0;
    while(head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
}

// Program to print Linked List
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
        Node *head = Input();
        print(head);
        cout << endl;
        cout << "Length of Linked List is : " << length(head) << endl;
    }

    return 0;
}