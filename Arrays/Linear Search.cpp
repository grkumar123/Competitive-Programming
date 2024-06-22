#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <climits>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int LinearSearch(int *arr, int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            return true;
        }
    }

    return false;
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

        int ans = LinearSearch(arr, n, x);

        if(ans)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }

    return 0;
}