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
        double x, y;
        cin >> x >> y;
        if (y == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            double div = x / y;
            cout << fixed << setprecision(1) << div << endl;
        }
    }
}