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
    char c;
    cin >> c;
    double m[12][12];
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }
    double x = 0, y = 4, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (i <= 5)
        {
            for (int j = 0; j <= x; j++)
            {
                sum += m[i][j];
            }
            x++;
        }
        else if (i >= 6)
        {
            for (int j = 0; j <= y; j++)
            {
                sum += m[i][j];
            }
            y--;
        }
    }
    if (c == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (c == 'M')
    {
        cout << fixed << setprecision(1) << sum / 30 << endl;
    }
}