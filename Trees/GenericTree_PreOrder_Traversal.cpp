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

void PreOrder(TreeNode *root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    for(int i = 0; i < root->children.size(); i++)
    {
        PreOrder(root->children[i]);
    }
}