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

//Create Tree Statically
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

void printTree(TreeNode<int> *root)
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
        TreeNode<int> *root = new TreeNode<int>(1);
        TreeNode<int> *node1 = new TreeNode<int>(2);
        TreeNode<int> *node2 = new TreeNode<int>(3);
        TreeNode<int> *node3 = new TreeNode<int>(4);
        root->children.push_back(node1);
        root->children.push_back(node2);
        node2->children.push_back(node3);

        printTree(root);    
    }

    return 0;
}