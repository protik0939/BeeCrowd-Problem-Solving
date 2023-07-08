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
    while (cin >> t && t != 0)
    {
        for (ll i = 1; i < t; i++)
        {
            cout << i << " ";
        }
        cout << t << endl;
    }
}