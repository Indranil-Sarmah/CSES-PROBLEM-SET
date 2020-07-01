/* ************ PROGRAM BY INDRANIL SARMAH ********************* */

#include <bits/stdc++.h>
#define ll long long int

using namespace std;


int main()
{

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);cout.tie(NULL);

     ll t, y, x;

        cin >> t;
        while (t--)
        {
            cin >> y >> x;

            ll a = max(y, x);
            ll b = min(y, x);

            ll s = (a - 1) * (a - 1);
            if (a == b)
                    s += a;
            else if (a % 2)
            {
                if (x == a)
                    s+= a * 2 - y;
                else
                    s += x;
            }
            else
            {
                if (y == a)
                    s += a * 2 - x;
                else
                    s += y;
            }

        cout << s << endl;


}
 return 0;
}
