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
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll cnt = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                cnt += 2;
            }
            else if (s[i] == '2' || s[i] == '3' || s[i] == '5')
            {
                cnt += 5;
            }
            else if (s[i] == '4')
            {
                cnt += 4;
            }
            else if (s[i] == '6' || s[i] == '9' || s[i] == '0')
            {
                cnt += 6;
            }
            else if (s[i] == '7')
            {
                cnt += 3;
            }
            else if (s[i] == '8')
            {
                cnt += 7;
            }
        }
        cout << cnt << " leds" << endl;
    }
}