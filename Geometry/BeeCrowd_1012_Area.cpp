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
    double a, b, c;
    cin >> a >> b >> c;
    double p, q, r, s, t, pi = 3.14159;
    p = (a * c) / 2;
    q = pi * c * c;
    r = ((a + b) / 2) * c;
    s = b * b;
    t = a * b;
    cout << fixed;
    cout << "TRIANGULO: " << setprecision(3) << p << endl;
    cout << "CIRCULO: " << setprecision(3) << q << endl;
    cout << "TRAPEZIO: " << setprecision(3) << r << endl;
    cout << "QUADRADO: " << setprecision(3) << s << endl;
    cout << "RETANGULO: " << setprecision(3) << t << endl;
}