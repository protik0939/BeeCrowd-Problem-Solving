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
    ll n, k, N = 10000;
    while (cin >> n >> k && n != 0 && k != 0)
    {
        ll x[N] = {0};
        for (ll i = 0; i < k; ++i)
        {
            ll a;
            cin >> a;
            x[a]++;
        }
        ll cnt = 0;
        for (ll i = 1; i <= n; ++i)
        {
            if (x[i] > 1)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}