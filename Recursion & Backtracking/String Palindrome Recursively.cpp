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

bool func(string s,int start, int end)
{
    if(start >= end)
    {
        return true;
    }

    if(s[start] != s[end])
    {
        return false;
    }

    func(s, start+1, end-1);
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
        string s;
        cin >> s;

        int len = s.size();
        int start = 0;
        int end = len-1;

        if(func(s, start, end))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}