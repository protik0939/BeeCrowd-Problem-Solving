#include <bits/stdc++.h>
using namespace std;

int main()
{
    string temp;
    int a, b, h1, m1, s1, h2, m2, s2, d, h, m, s;
    cin >> temp >> a;
    cin >> h1 >> temp >> m1 >> temp >> s1;
    cin >> temp >> b;
    cin >> h2 >> temp >> m2 >> temp >> s2;
    d = b - a;
    h = h2 - h1;
    m = m2 - m1;
    s = s2 - s1;

    if (s < 0)
    {
        s += 60;
        m--;
    }

    if (m < 0)
    {
        m += 60;
        h--;
    }

    if (h < 0)
    {
        h += 24;
        d--;
    }

    cout << d << " dia(s)" << endl;
    cout << h << " hora(s)" << endl;
    cout << m << " minuto(s)" << endl;
    cout << s << " segundo(s)" << endl;

    return 0;
}
