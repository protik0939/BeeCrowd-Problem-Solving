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
    int n, cnt;
    float f;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> f;
        cnt = 0;

        while (f > 1)
        {
            cnt++;
            f = f / 2;
        }
        cout << cnt << " dias" << endl;
    }
}