#include<iostream>
using namespace std;
int main()
{
    int i=1,n,count=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<'\n';
    }
    return 0;
}