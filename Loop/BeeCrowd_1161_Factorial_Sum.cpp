#include <bits/stdc++.h>
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
typedef long long int ll;
using namespace std;

ll fct(ll n)
{
    ll sum = 1;
    for(ll i=1; i<=n; i++)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    ll a, b;
    while(cin>>a>>b)
    {
        cout<<fct(a)+fct(b)<<endl;
    }
}