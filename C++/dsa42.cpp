//Binary to decimal code without using string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int deci=0,bin,bit,i=0,r=0,k=0;
    cin>>bin;
    r=bin;
    while(r!=0)
    {
        k=bin%10;
        bit=k&1;
        if(bit==1)
        {
            deci=pow(2,i)+deci;
            i++;
        }
        else
        {
            i++;
        }
        bin=bin/10;
        r=r>>1;
    }
    cout<<deci<<endl;
    return 0;
}
