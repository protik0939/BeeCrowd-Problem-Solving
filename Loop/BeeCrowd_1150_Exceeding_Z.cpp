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
    ll x, z;
    cin >> x;
    cin >> z;
    while (z <= x)
    {
        cin >> z;
    }
    ll s = 0, c = 1;
    for (ll i = x; i < z; i++)
    {
        s += i;
        if (s < z)
        {
            c += 1;
        }
    }
    cout << c << endl;
    return 0;
}