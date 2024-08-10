#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <climits>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

// Create a Binary Tree Level Wise
template <typename T>
class BinaryTreeNode
{
    public:
            T data;
            BinaryTreeNode *left;
            BinaryTreeNode *right;

            // Constructor
            BinaryTreeNode(T data)
            {
                this->data = data;
                left = NULL;
                right = NULL;
            }

            // Destructor
            ~BinaryTreeNode()
            {
                delete left;
                delete right;
            }
};

BinaryTreeNode<int> *InputLevelWise()
{
    int rootData;
    cout << "Enter Root Data" << endl;
    cin >> rootData;
    if(rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        
        cout << "Enter Left Child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if(leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout << "Enter Right Child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if(rightChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }

    return root;
}

void print(BinaryTreeNode<int> *root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << ":" << " ";
    if(root->left != NULL)
    {
        cout << "L" << root->left->data << " ";
    }
    if(root->right != NULL)
    {
        cout << "R" << root->right->data << " ";
    }
    cout << endl;
    print(root->left);
    print(root->right);
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
        // Input : 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 -1 -1 -1 -1 -1
        // Output :
        // 1: L2 R3 
        // 2: L4 R5 
        // 4: 
        // 5: L8 R9 
        // 8: 
        // 9: 
        // 3: L6 R7 
        // 6: 
        // 7: 

        BinaryTreeNode<int> *root = InputLevelWise();
        print(root);
    }
    
    return 0;
}
