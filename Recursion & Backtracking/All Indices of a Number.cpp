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

void func(int arr[], int n, int x, int index, vector<int> &output)
{
    if(index == n)
    {
        return;
    }

    if(arr[index] == x)
    {
        output.push_back(index);
    }

    func(arr, n, x, index+1, output);
}

vector<int> allIndex(int *arr, int n, int x)
{
    vector<int> output;
    func(arr, n, x, 0, output);
    return output;
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
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int x;
        cin >> x;

        vector<int> result = allIndex(arr, n, x);
        for(auto index : result)
        {
            cout << index << " ";
        }
    }

    return 0;
}