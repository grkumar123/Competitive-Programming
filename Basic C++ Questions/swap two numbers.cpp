#include <bits/stdc++.h>
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
      int m, n;
      cin >> m >> n;

      //Before swapping
      cout << m << " " << n << endl;

      int temp = m;
      m = n;
      n = temp;

      //After swapping
      cout << m << " " << n << endl;

    }

    return 0;
}