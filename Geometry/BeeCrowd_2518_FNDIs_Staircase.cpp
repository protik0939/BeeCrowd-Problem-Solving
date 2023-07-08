#include <bits/stdc++.h>
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

typedef long long int ll;
using namespace std;

int main() {
    somoy;

    int n;
    while (cin >> n) {
        int h, c, l;
        cin >> h >> c >> l;

        double x = sqrt((h * h) + (c * c));
        double res = (x * l * n) / 10000.0;

        cout << fixed << setprecision(4) << res << endl;
    }

    return 0;
}
