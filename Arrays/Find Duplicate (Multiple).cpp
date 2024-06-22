#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <climits>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <set>
#include <cstring>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// Optimize - Hashmap O(N)
void findDuplicateHashmap(int *arr, int n)
{
    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for(auto x: mp)
    {
        if(x.second > 1)
        {
            cout << x.first << endl;
        }
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
        int n;
        cin >> n;

        // int arr[n];
        int *arr = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        findDuplicateHashmap(arr, n);

        delete[] arr;
    }

    return 0;
}