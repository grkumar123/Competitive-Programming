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

// Fibonacci Series in a given range
void Fibo(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;

    if(n == 1)
    {
        cout << t1 << " ";
    }
    else if(n == 2)
    {
        cout << t2 << " ";
    }
    else
    {
        while(nextTerm <= n)
        {
            cout << nextTerm << " ";
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
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
        Fibo(n);
    } 
    
    return 0;
}
