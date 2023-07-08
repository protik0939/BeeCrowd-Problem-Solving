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
    while (t--)
    {
        ll n;
        cin >> n;
        bool q = true;
        if (n == 1 || n == 2)
        {
            cout << n << " eh primo" << endl;
        }
        else
        {
            for (ll i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    q = false;
                    break;
                }
            }
            if (q)
            {
                cout << n << " eh primo" << endl;
            }
            else
            {
                cout << n << " nao eh primo" << endl;
            }
        }
    }
}