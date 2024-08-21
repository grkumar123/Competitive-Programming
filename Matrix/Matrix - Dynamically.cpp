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
        // Create a 2D matrix dynamically

        int m, n;
        cin >> m >> n;

        int **matrix = new int*[m];
        for(int i = 0; i < m; i++)
        {
            matrix[i] = new int[n];
        }

        // Input
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin >> matrix[i][j];
            }
        }

        // Output
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << matrix[i][j] <<  " ";
            }
            cout << endl;
        }

        // Delete
        for(int i = 0; i < n; i++) 
        {
            delete[] matrix[i];
        }
        delete[] matrix;


    } 
    
    return 0;
}
