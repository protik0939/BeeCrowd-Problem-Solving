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
    ll N[20];
    for(ll i = 19; i>=0; i--)
    {
        cin>>N[i];
    }
    for(ll i = 0; i<20; i++)
    {
        cout<< "N["<<i<<"] = "<<N[i]<<endl;
    }
}