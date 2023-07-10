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
    ll n, m;

    while (cin >> n >> m)
    {
        ll res = 0;

        for (ll i = 0; i < n; ++i)
        {
            ll tmp = 0;

            for (ll j = 0; j < m; ++j)
            {
                ll v;
                cin >> v;

                if (v > 0)
                    tmp++;
            }

            if (tmp == m)
                res++;
        }

        cout << res << endl;
    }
}
