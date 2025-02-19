#include <bits/stdc++.h> 
using namespace std;
void findSetBit(int n) {   
    // Write your code here
    int bin=0,k=1;
    while(n>0)
    {
        int rem=n%2;
        bin=bin+rem*k;
        k*=10;
        n/=2;
    }
    cout<<bin<<endl;
    int flag=0;
    while(bin>0)
    {
        if((bin%10)==1)
        {
            flag++;
        }
        bin/=10;
    }
    cout<<flag<<endl;
}
int main()
{
    int n;
    cin>>n;
    findSetBit(n);
}