#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long input,vs;
    cin>>input;
    string output;
    while(input>0)
    {
        vs = input % 16;
        input /= 16;
        if(vs<=9){
            char c=vs+'0';
            output+=c;
        }
        else if(vs==10)
            output+='A';
        else if(vs==11)
            output+='B';
        else if(vs==12)
            output+='C';
        else if(vs==13)
            output+='D';
        else if(vs==14)
            output+='E';
        else if(vs==15)
            output+='F';
    }
    for(int i=output.length()-1;i>=0;i--)
        cout<<output[i];
    cout<<endl;
    return 0;
}
