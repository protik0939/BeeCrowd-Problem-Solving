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
    ll a, b, c = 0, d, e, f, g, h, i, j, l = 0, m = 0, x = 0, n, p;
    ll par[5], impar[5], ara[15];

    for (b = 0; b < 15; b++)
    {
        cin >> ara[b];
    }

    for (a = 0; a < 15; a++)
    {
        if (l == 5)
        {
            for (n = 0; n < 5; n++)
            {
                cout << "impar[" << n << "] = " << impar[n] << endl;
            }
            l = 0;
        }

        if (m == 5)
        {
            for (p = 0; p < 5; p++)
            {
                cout << "par[" << p << "] = " << par[p] << endl;
            }
            m = 0;
        }

        if (ara[a] % 2 != 0)
        {
            impar[c] = ara[a];
            ++c;
            l++;
            if (c == 5)
            {
                c = 0;
            }
        }

        if (ara[a] % 2 == 0)
        {
            par[x] = ara[a];
            ++x;
            m++;
            if (x == 5)
            {
                x = 0;
            }
        }
    }

    for (i = 0; i < l; i++)
    {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }

    for (j = 0; j < m; j++)
    {
        cout << "par[" << j << "] = " << par[j] << endl;
    }

    return 0;
}