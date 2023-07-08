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
    ll arr[100];
    for(ll i=0; i<100; i++)
    {
        cin>>arr[i];
    }
    ll mx = arr[0], pos;
    for(ll i=1; i<100; i++)
    {
        if(mx<arr[i])
        {
            mx = arr[i];
            pos = i+1;
        }
    }
    cout<<mx<<"\n"<<pos<<endl;
}