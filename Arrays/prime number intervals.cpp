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
      //Prime numbers between given intervals
      int m, n;
      cin >> m >> n;
      //bool is_prime = true;

      cout << "The prime numbers are" << " ";

      for(int i = m; i <= n; i++)
      {
         bool is_prime = true;
         for(int j = 2; j <= i/2; j++)
         {
            if(i%j == 0)
            {
               is_prime = false;
               break;
            }
         }

         if(is_prime == true)
         {
            cout << i << " ";
         }
      }


    }

    return 0;
}