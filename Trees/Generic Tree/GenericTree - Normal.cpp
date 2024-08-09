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

//Generic Tree - Normal
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
        // Input Data : 1 3 2 2 5 0 6 0 3 1 7 0 4 1 8 0
        // Output :
        // 1 : 2 3 4
        // 2 : 5 6
        // 5 :
        // 6 :
        // 3 : 7
        // 7 :
        // 4 : 8
        // 8

        TreeNode *root = Input();
        printTree(root);    
    }

    return 0;
}