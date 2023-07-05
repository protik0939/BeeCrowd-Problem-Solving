#include <bits/stdc++.h>
using namespace std;
int main()
    {
        while (1)
        {
            int x,y;
            cin>>x>>y;
            if(x<=0 || y<=0)
            {
                break;
            }
            int a = min(x,y);
            int b = max(x,y);
            int s = 0;
            for(int i=a; i<=b; i++)
            {
                cout<<i<<" ";
                s+=i;
            }
            cout<<"Sum="<<s<<endl;
        }
    }