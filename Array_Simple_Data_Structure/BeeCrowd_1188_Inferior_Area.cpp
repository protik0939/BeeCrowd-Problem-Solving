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
    double a = 0.0, arr[12][12];
    char ch[2];
    int p = 6, q = 5;
    cin >> ch;
    for (ll i = 0; i <= 11; i++)
    {
        for (ll j = 0; j <= 11; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (ll i = 7; i <= 11; i++)
    {
        for (ll j = q; j <= p; j++)
        {
            a += arr[i][j];
        }
        p++;
        q--;
    }
    if (ch[0] == 'S')
    {
        cout << fixed << setprecision(1) << a << endl;
    }
    else if (ch[0] == 'M')
    {
        a = a / 30.0;
        cout << fixed << setprecision(1) << a << endl;
    }
}