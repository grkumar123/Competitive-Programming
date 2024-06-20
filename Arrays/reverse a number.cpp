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
      int n;
      cin >> n;

      int sum = 0;

      while(n > 0)
      {
         int rem = n%10;
         sum = sum*10 + rem;
         n = n/10;
      }

      cout << sum << endl;



      

    }

    return 0;
}