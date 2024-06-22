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

// Brute Force O(N square)
void findDuplicate(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        int j = 0;
        while(j < i)
        {
            if(i != j && arr[i] == arr[j])
            {
                cout << arr[i] << endl;
                break;
            }

            j++;
        }
    }
}


// Optimize - XOR O(N)
int findDuplicateXOR(int *arr, int n)
{   
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        count = count xor arr[i];
    }

    for(int i = 0; i <= n-2; i++)
    {
        count = count xor i;
    }

    return count;
}

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

        // findDuplicateLoop(arr, n);

        // int ans = findDuplicateXOR(arr, n);
        // cout << ans << endl;

        findDuplicateHashmap(arr, n);

        delete[] arr;
    }

    return 0;
}