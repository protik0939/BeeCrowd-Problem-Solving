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
    ll r, l;
    cin >> r >> l;
    float pi = 3.1415;
    float d;
    d = (4 * pi * r * r * r) / 3;
    cout << (int)(l / d) << endl;
}