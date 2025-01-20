#include<iostream>
using namespace std;
int main()
{
    int i=2,n,sum=0;
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i=i+2;
    }
    cout<<"Sum of Even numbers till"<<" "<<n<<" "<<"is"<<" "<<sum<<endl;
    return 0;
}