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
    double a[12][12];
    char c;
    cin >> c;
    double sum = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> a[i][j];
        }
    }

    int u = 11;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < u; j++)
        {
            sum += a[i][j];
        }
        u--;
    }

    if (c == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (c == 'M')
    {
        cout << fixed << setprecision(1) << sum / 66 << endl;
    }
}