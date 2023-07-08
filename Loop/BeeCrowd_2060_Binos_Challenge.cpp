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
    ll n, x, two = 0, three = 0, four = 0, five = 0;
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            two++;
        }
        if (x % 3 == 0)
        {
            three++;
        }
        if (x % 4 == 0)
        {
            four++;
        }
        if (x % 5 == 0)
        {
            five++;
        }
    }
    cout << two << " Multiplo(s) de 2" << endl;
    cout << three << " Multiplo(s) de 3" << endl;
    cout << four << " Multiplo(s) de 4" << endl;
    cout << five << " Multiplo(s) de 5" << endl;
}