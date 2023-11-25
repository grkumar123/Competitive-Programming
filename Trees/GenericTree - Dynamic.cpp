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

//Create Tree Dynamically
class TreeNode
{
public:
    int data;
    vector<TreeNode*> children;
    TreeNode(int data)
    {
        this->data = data;
    }
};

TreeNode *Input()
{
    int rootData;
    cout << "Enter Root Data : " << endl;
    cin >> rootData;

    TreeNode *root = new TreeNode(rootData);
    int n;
    cout << "Enter the number of children of : " << rootData << endl;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        TreeNode *child = Input();
        root->children.push_back(child);
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