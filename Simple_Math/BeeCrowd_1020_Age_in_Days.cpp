#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X;
    cin>>X;
    int ano = X/365;
    X=X%365;
    int mes = X/30;
    X=X%30;
    int dia = X;
    cout<<ano<<" ano(s)\n"<<mes<<" mes(es)\n"<<dia<<" dia(s)\n";
}