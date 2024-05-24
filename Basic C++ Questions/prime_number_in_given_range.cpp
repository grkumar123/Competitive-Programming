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

// print all prime numbers in a given range [20, 90]

bool checkPrime(int m)
{
    int count = 0;
    for(int i = 1; i <= m; i++)
    {
        if(m%i == 0)
        {
            count += 1;
        }
    }

    if(count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void allPrime(int m, int n)
{
    while(m <= n)
    {
        if(checkPrime(m))
        {
            cout << m << " ";
        }

        m++;
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
        int m, n;
        cin >> m >> n;

        allPrime(m, n);

    }

    return 0;
}