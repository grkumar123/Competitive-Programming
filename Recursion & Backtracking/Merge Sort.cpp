#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <climits>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

// Merge Sort

void Merge(vector<int> &arr, int low, int mid, int high) 
{
    vector<int> temp; // temporary array
    
    // [left ...  mid]
    // [mid ... high]

    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void MergeSort(vector<int> &arr, int low, int high)
{
    //Base Case
    if(low >= high)  // At last after dividing only 1 element left in array
    {
        return;
    }

    int mid = (low + high) / 2;

    MergeSort(arr, low, mid);
    MergeSort(arr, mid+1, high);
    Merge(arr, low, mid, high);
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

        vector<int> arr = {3, 1, 9, 7, 6, 4, 8, 2, 5};
        int n = 9;

        cout << "Before :" << endl;
        for(int i: arr)
        {
            cout << i << " ";
        }

        MergeSort(arr, 0, n-1);

        cout << endl;

        cout << "After :" << endl;
        for(int i: arr)
        {
            cout << i << " ";
        }

    }

    return 0;
}