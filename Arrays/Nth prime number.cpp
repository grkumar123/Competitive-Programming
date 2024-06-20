#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
   int counter = 0;
   for(int i = 2; i < n; i++)
   {
      if(n%i == 0)
      {
         counter = 1;
         break;
      }
   }
   if(counter == 0)
   {
      return true;
   }
   else
   {
      return false;
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

      int num = 1, count = 0;

      while(true)
      {
         num++;
         if(isprime(num))
         {
            count++;
         }
         if(count == n)
         {
            cout <<"Nth prime number is :"<< " " << num << endl;
            break;
         }
      }

    }

    return 0;
}