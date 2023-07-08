#include <bits/stdc++.h>
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
typedef long long int ll;
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll i = 0;
    if (n == 1)
    {
        cout << "0" << endl;
    }
    else if (n == 2)
    {
        cout << "1" << endl;
    }
    else
    {
        ll x = 0, y = 1;
        cout << x << " " << y << " ";
        ll q = x + y;
        for (ll i = 2; i < n - 1; i++)
        {
            cout << q << " ";
            x = y;
            y = q;
            q = x + y;
        }
        cout << q << endl;
    }
}