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

// Create a Binary Tree Dynamically
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

BinaryTreeNode<int> *Input()
{
    int rootData;
    cin >> rootData;
    
    if(rootData == -1)
    {
        return NULL;
    }
    
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = Input();
    BinaryTreeNode<int> *rightChild = Input();

    root->left = leftChild;
    root->right = rightChild;

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
        // Input : 1 2 4 -1 -1 5 6 -1 -1 7 -1 -1 3 -1 8 -1 -1
        // Output:
        // 1: L2 R3 
        // 2: L4 R5 
        // 4: 
        // 5: L6 R7 
        // 6: 
        // 7: 
        // 3: R8 
        // 8: 

        BinaryTreeNode<int> *root = Input();
        print(root);
    }
    
    return 0;
}
