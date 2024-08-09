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

// Create a Generic Tree in Level wise
class TreeNode
{
    public:
            int data;
            vector<TreeNode*> children;
            TreeNode(int data)
            {
                this->data = data;
            }

            ~TreeNode()
            {
                for(int i = 0; i < children.size(); i++)
                {
                    delete children[i];
                }
            }
};

TreeNode *TakeInputLevelWise()
{
    int rootData;
    cin >> rootData;
    TreeNode *root = new TreeNode(rootData);

    queue<TreeNode*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0)
    {
        TreeNode *front = pendingNodes.front();
        pendingNodes.pop();

        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++)
        {
            int childData;
            cin >> childData;
            TreeNode *child = new TreeNode(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printLevelWise(TreeNode *root)
{
    queue<TreeNode*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0)
    {
        TreeNode *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";
        for(int i = 0; i < front->children.size(); i++)
        {
            if(i < (front->children.size() - 1))
            {
                cout << front->children[i]->data << " ";
            }
            else
            {
                cout << front->children[i]->data << " ";
            }
            pendingNodes.push(front->children[i]);
        }
        cout << endl;
    }
    
}

TreeNode *MaxDataNodes(TreeNode *root)
{
    if(root == NULL)
    {
        return 0;
    }

    TreeNode *big = root;
    for(int i = 0; i < root->children.size(); i++)
    {
        TreeNode *temp = MaxDataNodes(root->children[i]);
        if(temp->data > big->data)
        {
            big = temp;
        }
    }

    return big;
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
        TreeNode *root = TakeInputLevelWise();
        printLevelWise(root);

        cout << "Maximum Data Node : " << MaxDataNodes(root) << endl;
    }
    
    return 0;
}
