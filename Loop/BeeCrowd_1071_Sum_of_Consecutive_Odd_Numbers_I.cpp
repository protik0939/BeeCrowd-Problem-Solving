#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, sum = 0;
    cin >> x >> y;
    int a = min(x, y);
    int b = max(x, y);
    for (int i = a+1; i < b; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
}