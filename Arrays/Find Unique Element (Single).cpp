#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <climits>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
// Input = {2 3 1 6 3 6 2}
// Output = {1}

// Brute Force Solution O(N square)
int findUniqueLoop(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        int j = 0;
        while(j < n)
        {
            if(i != j && arr[i] == arr[j])
            {
                break;
            }
            j++;
        }

        if(j == n)
        {
            return arr[i];
        }
    }

    return -1;
}


// Optimize Solution O(N logN) - Sorting

// Optimize Solution O(N) - XOR
int findUniqueXOR(int *arr, int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        count = count xor arr[i];
    }

    return count;
}


// Optimize Solution O(N) - HashMap
int findUniqueHashmap(int *arr, int n)
{
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for(auto x: mp)
    {
        cout << x.first << " " << x.second << endl;
        if(x.second == 1)
        {
            return x.first;
        }
    }
    return -1;
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

        //int ans = findUniqueLoop(arr, n);

        //int ans = findUniqueXOR(arr, n);

        int ans = findUniqueHashmap(arr, n);

        cout << ans << endl;

        delete[] arr;
    }

    return 0;
}