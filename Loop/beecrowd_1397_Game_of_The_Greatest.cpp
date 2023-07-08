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
    ll g;
    while (cin >> g && g != 0)
    {
        ll a, b, x = 0, y = 0;
        while (g--)
        {
            cin >> a >> b;
            if (a > b)
            {
                x++;
            }
            else if (a < b)
            {
                y++;
            }
        }
        cout << x << " " << y << endl;
    }
}