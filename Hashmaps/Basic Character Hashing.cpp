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

        // precompute
        int hash[26] = {0};
        for(int i = 0; i < len; i++)
        {
            hash[s[i] - 'a']++;
        }

        int q;
        cin >> q;
        while(q--)
        {
            char c;
            cin >> c;

            // fretching
            cout << hash[c-'a'] << endl;
        }

    }

    return 0;
}