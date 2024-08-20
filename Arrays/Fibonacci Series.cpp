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

// Fibonacci Series
void Fibo(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            cout << t1 << " ";
            continue;
        }

        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";
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
