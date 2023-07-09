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
    int n;
    while (cin >> n && n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int x = min(i, min(j, min(n - i + 1, n - j + 1)));
                cout << setw(3) << x;
                if (j < n)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}