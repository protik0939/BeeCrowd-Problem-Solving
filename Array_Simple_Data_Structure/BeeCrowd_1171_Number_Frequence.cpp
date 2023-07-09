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
    ll t;
    cin >> t;
    vector<ll> sy;
    map<ll, ll> tq, qt;
    while (t--)
    {
        ll n;
        cin >> n;
        sy.push_back(n);
        tq[n]++;
    }
    sort(sy.begin(), sy.end());
    sy.erase(unique(sy.begin(), sy.end()), sy.end());
    for (ll i = 0; i < sy.size(); i++)
    {
        ll tmp = sy[i];
        cout << tmp << " aparece " << tq[tmp] << " vez(es)" << endl;
    }
}