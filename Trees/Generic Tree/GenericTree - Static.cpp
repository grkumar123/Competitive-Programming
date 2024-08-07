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

void print(TreeNode *root)
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
        print(root->children[i]);
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
        TreeNode *root = new TreeNode(51);
        TreeNode *node1 = new TreeNode(29);
        TreeNode *node2 = new TreeNode(34);

        root->children.push_back(node1);
        root->children.push_back(node2);

        print(root);
    }
    
    return 0;
}