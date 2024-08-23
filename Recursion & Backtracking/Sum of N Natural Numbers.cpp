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

// Sum of first N Natural Numbers

// 1. Return
int Function1(int n)
{
    // Base Case
    if(n == 0)
    {
        return 0;
    }

    return n + Function1(n-1);
}

// 2. Print
void Function2(int n, int sum)
{
    // Base Case
    if(n == 0)
    {
        cout << sum << endl;
        return;
    }
    
    Function2(n-1, sum+n);   
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

        // Method 1
        cout << Function1(n) << endl;

        // Method 2
        Function2(n, 0);

    }

    return 0;
}
