#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {   
        for(int j=1;j<=i;j++)
        {
            cout<<i+j-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}