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

//Create Tree in Wise Manner using Queue
class TreeNode
{
public:
    int data;
    vector<TreeNode*> children;
    TreeNode(int data)  //Constructor
    {
        this->data = data;
    }
    ~TreeNode()  //Destructor
    {
        for(int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

TreeNode *Input()
{
    int rootData;
    cout << "Enter Root Data : " << endl;
    cin >> rootData;
    TreeNode *root = new TreeNode(rootData);
    queue<TreeNode*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0)
    {
        TreeNode *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter number of children of " << front->data << endl;
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter " << i << "th " << "child of " << front->data << endl;
            cin >> childData;
            TreeNode *child = new TreeNode(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree(TreeNode *root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    for(int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << " ";
    }
    cout << endl;
    for(int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
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
        TreeNode *root = Input();
        printTree(root);    
    }

    return 0;
}