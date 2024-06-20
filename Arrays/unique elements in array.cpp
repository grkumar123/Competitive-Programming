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

void Function(int* arr, int n)
{
   for(int i = 0; i < n; i++)
   {
        bool flag = true;
        int j = 0;
        while(j <= n)
        {
            if(arr[i] == arr[j] && i != j)
            {
                flag = false;
                break;
            }
            j++;
        }

        if(flag)
        {
            cout << arr[i] << " ";
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
        //Input = [1 65 1 2 2 3 4 4 9 5 3 3 7 7 9]
        //Output = 65 5

        int n;
        cin >> n;
        int arr[n];  
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Function(arr, n);    
    }

    return 0;
}
