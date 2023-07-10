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
    char c;
    cin >> c;
    double sum = 0;
    double a[12][12];
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> a[i][j];
            if (j > i && (i + j) < 11)
            {
                sum += a[i][j];
            }
        }
    }

    cout << fixed << setprecision(1);
    if (c == 'S')
    {
        cout << sum << endl;
    }
    else if (c == 'M')
    {
        cout << sum / 30 << endl;
    }
}