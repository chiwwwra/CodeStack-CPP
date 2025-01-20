//Program to find nCr
#include<bits/stdc++.h>
using namespace std;
int fact(int a)
{
    if(a==0) return 1;
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int nCr=0;
    nCr=fact(n)/((fact(n-r))*fact(r));
    cout<<"Required Combination is" <<" "<< nCr <<endl;
    return 0;
}