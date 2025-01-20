#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Fibonacci Series
    int a=0,b=1,n,c=0;
    cin>>n;
    if(n==1)
        {
            cout<<"Fibonacci sequence :"<< endl <<a << endl;
        }
    else if(n==2)
        {
            cout<<"Fibonacci sequence :"<< endl <<a << endl <<b <<endl;
        }
    else
        {
        cout<<"Fibonacci sequence :"<< endl <<a << endl <<b <<endl;
        for(int i=2;i<n;i++)
        {
            c=a+b;
            cout<<c<<endl;
            a=b;
            b=c;
        }
    }
    return 0;
}