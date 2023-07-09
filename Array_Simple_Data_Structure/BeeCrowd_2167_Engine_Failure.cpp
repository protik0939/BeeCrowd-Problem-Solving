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

    vector<ll> arr(t);
    for (ll i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    bool ck = false;
    for (ll i = 1; i < t; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            cout << i + 1 << endl;
            ck = true;
            break;
        }
    }

    if (!ck)
    {
        cout << "0" << endl;
    }
}