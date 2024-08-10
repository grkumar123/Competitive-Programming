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

// Create a Binary Tree Statically
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
        BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
        BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
        BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);

        root->left = node1;
        root->right = node2;

        print(root);
    }
    
    return 0;
}
