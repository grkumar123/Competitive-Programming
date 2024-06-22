#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <climits>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
// Input = {9, 3, 6, 12, 4, 32}
// Output = {3, 9, 12, 6, 32, 4}
void SwapAlternate(int *arr, int n)
{
    for(int i = 0; i < n-1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
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
        int n;
        cin >> n;

        // int arr[n];
        int *arr = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        SwapAlternate(arr, n);

        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        delete[] arr;
    }

    return 0;
}