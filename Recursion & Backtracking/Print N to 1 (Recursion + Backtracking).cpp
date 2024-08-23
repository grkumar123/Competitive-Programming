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

// Print from N to 1

// 1. Recursion
void RecursiveFunction(int n)
{
    // Base Case
    if(n == 0)
    {
        return;
    }

    cout << n << endl;;
    RecursiveFunction(n-1);
}

// 2. Backtracking
void BackTracking(int i, int n)
{
    // Base Case
    if(i > n)
    {
        return;
    }

    BackTracking(i+1, n);
    cout << i << endl;
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
        
        RecursiveFunction(n);
        BackTracking(1, n);

    }

    return 0;
}
