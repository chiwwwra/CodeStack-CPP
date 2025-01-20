//To find whether given no. is prime or not
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{   if(n==1)return 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a;
    cin>>a;
    if(isPrime(a))
    {
        cout<<"Given no. is not prime"<<endl;
    }
    else
    {
        cout<<"Prime"<<endl;
    }
    return 0;
}