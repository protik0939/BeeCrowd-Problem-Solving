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
    ll n;
    cin>>n;
    for(ll i=0; i<10; i++)
    {
        cout<<"N["<<i<<"] = "<<n<<endl;
        n*=2;
    }
}