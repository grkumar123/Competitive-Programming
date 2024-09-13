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
    if(s[start] == '\0' || s[start+1] == '\0')
    {
        cout << s << endl;
        return;
    }

    if(s[start] == 'p' && s[start+1] == 'i')
    {
        int n = len(s);
        s[n+2] = '\0';
        for(int i = n-1; i >= start+2; i--)
        {
            s[i+2] = s[i];
        }
        
        s[start] = '3';
        s[start+1] = '.';
        s[start+2] = '1';
        s[start+3] = '4';
    }

    func(s, start+1);
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

        func(s, 0);
    }

    return 0;
}
