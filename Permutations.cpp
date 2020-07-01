/* ************ PROGRAM BY INDRANIL SARMAH ********************* */
#include<iostream>
#include <bits/stdc++.h>
#define ll long long int
#define li long int
#define llu long long unsigned int
using namespace std;


int main()
{

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);cout.tie(NULL);

     int n;
     cin >> n;

     if (n == 1)
        cout << "1";

    else if (n < 4)
        cout << "NO SOLUTION\n";

    else if (n == 4)
        cout << "3 1 4 2";

    else {
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";

        for (int i = 2; i <= n; i += 2)
        {
            cout << i;
            if (i < n - 1)
                cout << " ";

        }
  }

     return 0;
}
