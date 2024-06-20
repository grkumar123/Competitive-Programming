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
      
      int a, b;
      cin >> a >> b;

      int add, sub, mul, div;
      
      //Addition
      add = a + b;
      cout << add << endl;

      //Subtraction
      sub = a - b;
      cout << sub << endl;

      //Multiplication
      mul = a * b;
      cout << mul << endl;

      //Division
      div = a / b;
      cout << div << endl;

    }

    return 0;
}