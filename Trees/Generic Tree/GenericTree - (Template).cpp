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

template <typename T>
class TreeNode
{
    public:
            T data;
            vector<TreeNode<T>*> children;
            TreeNode(T data)
            {
                this->data = data;
            }
};

void print(TreeNode<int> *root)
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
        TreeNode<int> *root = new TreeNode<int>(501);
        TreeNode<int> *node1 = new TreeNode<int>(209);
        TreeNode<int> *node2 = new TreeNode<int>(304);

        root->children.push_back(node1);
        root->children.push_back(node2);

        print(root);
    }
    
    return 0;
}