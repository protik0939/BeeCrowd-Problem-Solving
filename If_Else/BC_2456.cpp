#include <bits/stdc++.h>
using namespace std;
int main()
    {
        int cards[5];
        for (int i=0;i<5;i++)
        {
            cin>>cards[i];
        }
        int inc=0, dec=0;
        for (int i=0; i<4; i++)
        {
            if (cards[i]<cards[i+1])
            {
                inc++;
            }
            else if (cards[i]>cards[i+1])
            {
                dec++;
            }
        }
        if(inc==4)
        {
            cout<<"C\n";
        }
        else if(dec==4)
        {
            cout<<"D\n";
        }
        else
        {
            cout<<"N\n";
        }
    }
