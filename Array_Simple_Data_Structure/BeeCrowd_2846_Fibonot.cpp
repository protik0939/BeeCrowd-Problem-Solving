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
    ll NN = 100100;
    ll a[NN];
    ll b[NN];

    a[0] = 0;
    a[1] = 1;
    for (ll i = 2; i <= NN; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }

    ll n;
    cin >> n;
    for (ll i = 1, j = 2, k = 1; i <= NN; i++)
    {
        if (a[j] != i)
        {
            b[k++] = i;
        }
        else
        {
            ++j;
        }
    }

    cout << b[n] << endl;

    return 0;
}
