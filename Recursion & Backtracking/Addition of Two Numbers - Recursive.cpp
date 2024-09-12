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

int func(int m, int n)
{
    if(n == 0)
    {
        return m;
    }

    return func(m+1, n-1);
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
        int m,  n;
        cin >> m >> n;

        cout << func(m, n);
        
    }

    return 0;
}