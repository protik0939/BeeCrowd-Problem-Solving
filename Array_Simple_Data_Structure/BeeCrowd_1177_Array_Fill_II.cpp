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
    ll lim = 0;
    ll arr[1000];
    for (ll i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << lim << endl;
        lim++;
        if(lim == n)
        {
            lim = 0;
        }
    }
}