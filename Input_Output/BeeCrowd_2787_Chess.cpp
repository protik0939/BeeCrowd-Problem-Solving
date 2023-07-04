#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int x,y;
        cin>>x>>y;
        if((x%2==0 && y%2==0) || (x%2==1 && y%2==1))
        {
            cout<<"1"<<endl;
        }
        else if((x%2==0 && y%2==1) || (x%2==1 && y%2==0))
        {
            cout<<"0"<<endl;
        }
    }