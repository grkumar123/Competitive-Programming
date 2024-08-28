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

// Graph - Depth First Search

void print(int **edges, int n, int sv, bool *visited)
{   
    cout << sv << endl;
    visited[sv] = true;
    for(int i = 0; i < n; i++)
    {
        if(i == sv)
        {
            continue;
        }

        if(edges[sv][i] == 1)
        {
            if(visited[i])
            {
                continue;
            }
            print(edges, n, i, visited);
        }
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
        int n, e;
        cin >> n >> e;

        int **edges = new int*[n];
        for(int i = 0; i < n; i++)
        {
            edges[i] = new int[n];
            for(int j = 0; j < n; j++)
            {
                edges[i][j] = 0;
            }
        }

        for(int i = 0; i < e; i++)
        {
            int f, s;
            cin >> f >> s;
            edges[f][s] = 1;
            edges[s][f] = 1;
        }

        bool *visited = new bool[n];
        for(int i = 0; i < n; i++)
        {
            visited[i] = false;
        }

        print(edges, n, 0, visited);

        for(int i = 0; i < n; i++)
        {
            delete [] edges[i];
        }
        delete [] edges;
    }

    return 0;
}
