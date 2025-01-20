#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Decimal to binary
    int n,bin=0,rem=0,k=0,rev=0,rema=0,r=0;
    cin>>n;
    r=n;
    while(n!=0)
    {
        rem=n%2;
        if(rem&1)
        {
            bin=bin*10+rem;
        }
        else
        {
            bin=bin*10;
        }
        n=n/2;
    }
    k=bin;
    while(k!=0)
    {
        rema=k%10;
        rev=rev*10+rema;
        k=k/10;
    }
    while((r%2)!=1)
    {
       rev=rev*10;
       r=r/2;
    }
    cout<<rev<<endl;
    return 0;
}