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

void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if(n == 0)
    {
        return;
    }

    // Copy all disk from source to auxiliary
    towerOfHanoi(n-1, source, destination, auxiliary);

    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Copy all disk from auxiliary to destination
    towerOfHanoi(n-1, auxiliary, source, destination);
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
        // 'A' is source, 'B' is auxiliary, 'C' is destination,
        towerOfHanoi(n, 'A', 'B', 'C');
    }

    return 0;
}
