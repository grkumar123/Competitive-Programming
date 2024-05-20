#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <climits>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

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

        // precompute
        int hash[13] = {0};
        for(int i = 0; i < n; i++)
        {
            hash[arr[i]] += 1;
        }

        int q;
        cin >> q;

        while(q--)
        {
            int number;
            cin >> number;

            // fretching
            cout << hash[number] << endl;
        }

    }

    return 0;
}