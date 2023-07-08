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
    double v, d, ln, pi = 3.14;
    while (cin >> v >> d)
    {
        double r = d / 2;
        double area = pi * r * r;
        ln = v / area;
        cout << fixed;
        cout << "ALTURA = " << setprecision(2) << ln << endl;
        cout << "AREA = " << setprecision(2) << area << endl;
    }
}