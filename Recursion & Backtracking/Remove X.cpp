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

int len(char s[])
{
    int n = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        n++;
    }
    return n;
}

void func(char s[], int start)
{
    if(s[start] == '\0')
    {
        return;
    }

    func(s, start+1);
    
    if(s[start] == 'x')
    {
        int n = len(s);
        int i;

        for(i = start+1; i < n; i++)
        {
            s[i-1] = s[i];
        }

        s[i-1] = '\0';
    }    
}

void func(char s[])
{
    func(s, 0);
    cout << s << endl;
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
        char s[100];
        cin >> s;

        func(s);
    }

    return 0;
}
