#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
    {
     double a, b, c;
     cin>>a>>b>>c;
     double R1, R2;
     double sr = sqrt((b*b)-4*a*c);
     R1 = (-b+sr)/(2*a);
     R2 = (-b-sr)/(2*a);
     if (a==0 || ((b*b)-4*a*c)<0)
     {
         cout<<"Impossivel calcular\n";
     }
     else
     {
         cout<<fixed;
         cout<<setprecision(5)<<"R1 = "<<R1<<endl;
         cout<<setprecision(5)<<"R2 = "<<R2<<endl;
     }
    }
