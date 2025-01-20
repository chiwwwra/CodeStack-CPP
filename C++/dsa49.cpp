//Program to find the nth term of Fibonacci Sequence
#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==1||n==2) return 1;
    int l=1,m=1,next;
    for(int i=3;i<=n;i++)
    {
        next=l+m;
        m=l;
        l=next;
        if(i==n)
        {
            return next;
        }
    }
}
int main()
{
    int a;
    cin>>a;
    cout<<"nth term is"<<" "<<fibo(a)<<endl;
}