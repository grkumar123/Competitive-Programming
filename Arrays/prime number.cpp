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

      //Check number is Prime or not
      int count = 0;
      for(int i = 1; i <= n; i++)
      {
         if(n%i == 0)
         {
            count += 1;
         }
      }

      if(count == 2)
      {
         cout << "The number is Prime" << endl;
      }
      else
      {
         cout << "The number is not Prime" << endl;
      }
    }

    return 0;
}