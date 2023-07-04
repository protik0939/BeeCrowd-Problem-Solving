#include <bits/stdc++.h>
using namespace std;
int main()
    {
        double note;
        cin>>note;
        double tmp = note;
        int note_tmp = note;
        tmp = tmp - note_tmp;
        int moeda = tmp*100;
        int n_100, n_50, n_20, n_10, n_5, n_2, cp_50, cp_25, cp_10, cp_05;
        n_100 = note_tmp/100;
        note_tmp%=100;
        n_50 = note_tmp/50;
        note_tmp%=50;
        n_20 = note_tmp/20;
        note_tmp%=20;
        n_10 = note_tmp/10;
        note_tmp%=10;
        n_5 = note_tmp/5;
        note_tmp%=5;
        n_2 = note_tmp/2;
        note_tmp%=2;
        cout<<"NOTAS:\n";
        cout<<n_100<<" nota(s) de R$ 100.00\n";
        cout<<n_50<<" nota(s) de R$ 50.00\n";
        cout<<n_20<<" nota(s) de R$ 20.00\n";
        cout<<n_10<<" nota(s) de R$ 10.00\n";
        cout<<n_5<<" nota(s) de R$ 5.00\n";
        cout<<n_2<<" nota(s) de R$ 2.00\n";
        cout<<"MOEDAS:\n";
        cout<<note_tmp<<" moeda(s) de R$ 1.00\n";
        cp_50 = moeda/50;
        moeda%=50;
        cp_25 = moeda/25;
        moeda%=25;
        cp_10 = moeda/10;
        moeda%=10;
        cp_05 = moeda/5;
        moeda%=5;
        cout<<cp_50<<" moeda(s) de R$ 0.50\n";
        cout<<cp_25<<" moeda(s) de R$ 0.25\n";
        cout<<cp_10<<" moeda(s) de R$ 0.10\n";
        cout<<cp_05<<" moeda(s) de R$ 0.05\n";
        cout<<moeda<<" moeda(s) de R$ 0.01\n";

    }