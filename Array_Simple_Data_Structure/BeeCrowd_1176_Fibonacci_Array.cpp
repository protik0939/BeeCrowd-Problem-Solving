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
    ll arr[61];
    arr[0] = 0;
    arr[1] = 1;
    ll x = 0, y = 1;
    ll q = x + y;
    for (ll i = 2; i <= 60; i++)
    {
        arr[i] = q;
        x = y;
        y = q;
        q = x + y;
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << "Fib(" << n << ") = " << arr[n] << endl;
    }
}