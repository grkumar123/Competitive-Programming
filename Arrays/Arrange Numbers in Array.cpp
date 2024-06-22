#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <climits>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
// Input = {1 , 2, 3, 4, 5, 6, 7, 8, 9, 10}
// Output = {1, 3, 5, 7, 9, 10, 8, 6, 4, 2}
void ArrangeNumbers(int *arr, int n)
{
    int start = 0;
    int end = n-1;
    int i = 1;

    while(start <= end)
    {
        if(i%2 != 0)
        {
            arr[start] = i;
            i++;
            start++;
        }
        else
        {
            arr[end] = i;
            i++;
            end--;
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
        int n;
        cin >> n;

        // int arr[n];
        int *arr = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ArrangeNumbers(arr, n);

        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        delete[] arr;
    }

    return 0;
}