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
            int data;
            vector<TreeNode*> children;
            // Constructor
            TreeNode(int data)
            {
                this->data = data;
            }
            // Destructor
            ~TreeNode()
            {
                for(int i = 0; i < children.size(); i++)
                {
                    delete children[i];
                }
            }

};

TreeNode<int> *TakeInputLevelWise()
{
    int rootData;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0)
    {
        TreeNode<int> *front  = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++)
        {
            int childData;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;

}

void printLevelWise(TreeNode<int> *root)
{
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";
        for(int i = 0; i < front->children.size(); i++)
        {
            if(i < (front->children.size()-1))
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
        // Input Data : 1 3 2 3 4 2 5 6 0 0 0 0
        // Output :
        // 1 : 2 3 4
        // 2 : 5 6
        // 3 :
        // 4 :
        // 5 :
        // 6 :

        TreeNode<int> *root = TakeInputLevelWise();
        printLevelWise(root);
    }
    
    return 0;
}
