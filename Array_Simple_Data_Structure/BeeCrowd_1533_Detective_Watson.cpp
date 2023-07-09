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
    ll n;
    while (cin >> n && n != 0)
    {
        vector<pair<ll, ll>> ax;
        for (ll i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            ax.push_back({tmp, i + 1});
        }
        sort(ax.begin(), ax.end());
        cout << ax[ax.size() - 2].second << endl;
    }
}