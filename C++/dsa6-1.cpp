#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,a,i=2,count=0;
    cin>>n;
    a=sqrt(n);
    while(i<=a)
    {
        if(n%i==0)
        {
            count ++;
        }
        i++;
    }
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