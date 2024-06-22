#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <climits>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// Brute Force O(N square)
void findUniqueLoop(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        bool isUnique = true;
        int j = 0;
        while(j <= n)
        {
            if(i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
            j++;
        }

        if(isUnique)
        {
            cout << arr[i] << " ";
        }
    }
  
}

// Hashmap O(N)
void findUniqueHashmap(int *arr, int n)
{
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for(auto x: mp)
    {
        if(x.second == 1)
        {
            cout << x.first << " ";
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

        findUniqueLoop(arr, n);

        findUniqueHashmap(arr, n);

        delete[] arr;
    }

    return 0;
}