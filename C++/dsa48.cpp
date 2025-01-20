//Program to find set bits
#include<bits/stdc++.h>
using namespace std;
int setbits(int a,int b)
{
    int count1=0,count2=0;
    while(a!=0)
    {
        if(a&1==1)
        {
            count1++;
        }
        a=a>>1;
    }
    while(b!=0)
    {
        if(b&1==1)
        {
            count2++;
        }
        b=b>>1;
    }
    return count1+count2;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"No. of Set Bits are"<<" "<<setbits(a,b)<<endl;
}