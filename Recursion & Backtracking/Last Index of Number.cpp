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

int func(int *arr, int n, int x)
{
    if(n == 0)
    {
        return -1;
    }
    
    int ans = func(arr+1, n-1, x);

    if(ans != -1)
    {
        return ans + 1;
    }

    if(arr[0] == x)
    {
        return 0;
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

        int arr[n];

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int x;
        cin >> x;

        int ans = func(arr, n, x);
        cout << ans;
    }

    return 0;
}