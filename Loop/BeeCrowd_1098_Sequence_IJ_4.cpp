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
    float i = 0;
    float j = 1;
    while (i <= 2.1)
    {
        cout << "I=" << i << " "
             << "J=" << j + i << "\n";
        cout << "I=" << i << " "
             << "J=" << j + 1 + i << "\n";
        cout << "I=" << i << " "
             << "J=" << j + 2 + i << "\n";
        i += 0.2;
    }
}