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

int func(int n)
{
    // Base Case
    if(n == 0)
    {
        return 1;
    }

    return n * func(n-1);
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

        int x = func(n);
        cout << "Factorial of " << n << " : " << x;
        
    }

    return 0;
}