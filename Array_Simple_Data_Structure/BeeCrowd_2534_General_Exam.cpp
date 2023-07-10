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
    int n, q, f;
    vector<int> dgr;

    while (cin >> n >> q)
    {
        dgr.clear();

        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            dgr.push_back(tmp);
        }

        sort(dgr.begin(), dgr.end());
        reverse(dgr.begin(), dgr.end());

        for (int i = 0; i < q; i++)
        {
            cin >> f;
            cout << dgr[f - 1] << endl;
        }
    }
}