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

int length(string &s)
{
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool checkPalindrome(string &s, int start, int end)
{
    if(s[start] == '\0' || s[start+1] == '\0')
    {
        return 1;
    }

    if(start >= end)
    {
        return 1;
    }

    if(s[start] == s[end])
    {
        return checkPalindrome(s, start+1, end-1);
    }
    else
    {
        return 0;
    }
}

bool func(string &s)
{
    int len = length(s);
    return checkPalindrome(s, 0, len-1);

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

        if(func(s))
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
