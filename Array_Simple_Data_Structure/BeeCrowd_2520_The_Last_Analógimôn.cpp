#include <bits/stdc++.h>
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
typedef long long int ll;
using namespace std;
int main()
{
    somoy;
    ll a, b;
    while (cin >> a >> b)
    {
        ll x1 = 0, x2 = 0, y1 = 0, y2 = 0;
        for (ll i = 0; i < a; i++)
        {
            for (ll j = 0; j < b; j++)
            {
                ll q;
                cin >> q;
                if (q == 1)
                {
                    x1 = i, y1 = j;
                }
                if (q == 2)
                {
                    x2 = i, y2 = j;
                }
            }
        }
        cout << abs(y1 - y2) + abs(x1 - x2) << endl;
    }
}