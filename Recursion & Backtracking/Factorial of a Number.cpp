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

// Factorial of a Number

// 1. Return
int Factorial(int n)
{
    // Base Case
    if(n == 0)
    {
        return 1;
    }

    return n * Factorial(n-1);
}

// 2. Print
void Factorial1(int n, int fact)
{
    // Base Case
    if(n == 0)
    {
        cout << fact << endl;
        return;
    }

    Factorial1(n-1, n*fact);
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
        cout << Factorial(n) << endl;

        // Method 2
        Factorial1(n, 1);

    }

    return 0;
}
