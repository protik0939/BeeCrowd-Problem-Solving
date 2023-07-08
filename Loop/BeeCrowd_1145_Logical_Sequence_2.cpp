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
    cin >> a >> b;
    ll x = 1;
    while (x < b)
    {
        for (ll i = 1; i <= a; i++)
        {
            if (i == a)
            {
                cout << x << endl;
            }
            else
            {
                cout << x << " ";
            }
            x++;
        }

    }
}