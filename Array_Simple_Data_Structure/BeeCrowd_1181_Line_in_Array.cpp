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
    double a = 0.0, M[12][12];
    char T[2];
    int C, x, y;

    cin >> C;
    cin >> T;

    for (x = 0; x <= 11; x++)
    {
        for (y = 0; y <= 11; y++)
        {
            cin >> M[x][y];
            if (x == C)
            {
                a += M[x][y];
            }
        }
    }

    if (T[0] == 'S')
    {
        cout << fixed << setprecision(1) << a << endl;
    }
    else if (T[0] == 'M')
    {
        a = a / 12.0;
        cout << fixed << setprecision(1) << a << endl;
    }
}