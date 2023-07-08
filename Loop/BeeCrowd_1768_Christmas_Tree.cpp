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
    int n;
    while (cin >> n)
    {
        ll x = n / 2 + 1;
        for (ll i = 1; i <= x; i++)
        {
            for (ll j = i; j <= n / 2; j++)
            {
                cout << " ";
            }
            ll p = 2 * i - 1;
            for (ll s = 1; s <= p; s++)
            {
                cout << "*";
            }
            cout << endl;
        }
        ll c = 1;
        while (c <= 2)
        {
            for (ll j = c; j <= n / 2; j++)
            {
                cout << " ";
            }
            ll p = 2 * c - 1;
            for (ll s = 1; s <= p; s++)
            {
                cout << "*";
            }
            cout << endl;
            c++;
        }
        cout << endl;
    }
}