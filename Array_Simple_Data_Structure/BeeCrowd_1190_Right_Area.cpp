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
    int p = 11, r = 7;
    cin >> ch;
    for (ll i = 0; i <= 11; i++)
    {
        for (ll j = 0; j <= 11; j++)
            cin >> arr[i][j];
    }
    for (ll i = 1; i <= 10; i++)
    {
        if (i <= 5)
        {
            for (ll j = p; j <= 11; j++)
            {
                a += arr[i][j];
            }
            p--;
        }
        else if (i >= 6)
        {
            for (ll j = r; j <= 11; j++)
            {
                a += arr[i][j];
            }
            r++;
        }
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