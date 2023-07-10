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
    ll f, x, y;
    cin >> f;
    cin >> ch;

    for (x = 0; x <= 11; x++)
    {
        for (y = 0; y <= 11; y++)
        {
            cin >> arr[x][y];
            if (y == f)
            {
                a += arr[x][y];
            }
        }
    }

    if (ch[0] == 'S')
    {
        cout << fixed << setprecision(1) << a << endl;
    }
    else if (ch[0] == 'M')
    {
        a = a / 12.0;
        cout << fixed << setprecision(1) << a << endl;
    }
}