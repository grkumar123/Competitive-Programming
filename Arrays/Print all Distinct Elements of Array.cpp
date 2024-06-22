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
void allDistinctLoop(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        int j;
        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                break;
            }
        }
        if(i == j)
        {
            cout << arr[i] << " ";
        }
    }
}

// Optimize - Sorting O(N logN)
void allDistinctSorting(int *arr, int n)
{
    sort(arr, arr + n);
 
    for (int i=0; i<n; i++)
    {
       while (i < n-1 && arr[i] == arr[i+1])
       {
          i++;
       }
 
       cout << arr[i] << " ";
    }
}


// Optimize - Set O(N)
void allDistinctSet(int *arr, int n)
{
    set<int> s;

    for(int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << " " << *it; 
    }
}

// Optimize - Hashmap O(N)
void allDistinctHashmap(int *arr, int n)
{
    unordered_set<int> s;

    for(int i = 0; i < n; i++)
    {
        if(!s.count(arr[i]))
        {
            s.insert(arr[i]);
            cout << arr[i] << " ";
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

        allDistinctLoop(arr, n);

        allDistinctSorting(arr, n);

        allDistinctSet(arr, n);

        allDistinctHashmap(arr, n);

        delete[] arr;
    }

    return 0;
}