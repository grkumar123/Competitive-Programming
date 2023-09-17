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

      //Power
      int ans = pow(m, n);
      cout << ans << endl;

      //Cube
      int cube = m * m * m;
      cout << cube << endl;

      //Square Root
      int sq = sqrt(m);
      cout << sq << endl;




    }

    return 0;
}