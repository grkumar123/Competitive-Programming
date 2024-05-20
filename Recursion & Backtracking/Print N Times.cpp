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

void func(int n)
{
    // Base Condition
    if(n <= 0)
    {
        return;
    }
    else
    {
        cout << "Gyan" << endl;
    }

    // Recursion call
    func(n-1);  
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

        func(n);
    }

    return 0;
}