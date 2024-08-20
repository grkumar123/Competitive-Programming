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

// Nth Fibonacci Number

// Method 1: (Extra Space)
int Fibo(int n)
{
    if(n <= 1)
    {
        return n;
    }

    return Fibo(n-1) + Fibo(n-2);
}

// Method 2: (Optimized Space)
int Fibo(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;

    if(n == 0)
    {
        return t1;
    }

    for(int i = 2; i <= n; i++)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return t2;
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
        cout << Fibo(n);
    } 
    
    return 0;
}
