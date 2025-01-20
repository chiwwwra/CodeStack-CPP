#include<iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0;
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }
    cout<<"Sum of Even numbers till"<<" "<<n<<" "<<"is"<<" "<<sum<<endl;
    return 0;
}