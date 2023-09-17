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
      int n, num, rem, sum = 0;
      cin >> n;

      num = n;

      while(num > 0)
      {
        rem = num % 10;
        sum = sum*10 + rem;
        num = num / 10;
      }

      if(sum == n)
      {
        cout << "Palindrome" << endl;
      }
      else
      {
        cout << "Not a Palindrome" << endl;
      }

    }

    return 0;
}