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

int func(int n)
{
    int count = 0;
    while(n > 0)
    {
        int ans = n % 10;
        if(ans == 0)
        {
            count++;
        }
        n = n / 10;
        func(n);
    }
    return count;
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

        cout << func(n);
        
    }

    return 0;
}
