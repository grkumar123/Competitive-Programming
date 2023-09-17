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

      //Even
      if(n%2 == 0)
      {
         cout << "The number is even" << endl;
      }

      if(n%2 != 0)
      {
         cout << "The number is odd" << endl;
      }
    }

    return 0;
}