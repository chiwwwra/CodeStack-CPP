#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,a,i=2,count=0;
    cin>>n;
    a=sqrt(n);
    cout<<a<<endl;
    while(i<=a)
    {
        if(n%i==0)
        {
            count ++;
        }
        i++;
    }
    cout<<count<<endl;
    if(count==0)
    {
        cout<<"Given no. is prime"<<endl;
    }
    else
    {
        cout<<"Given no. is not a prime"<<endl;
    }
    return 0;
}