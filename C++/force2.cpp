#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,i=1;
        cin>>n;
        while(i<=n)
        {
            int a;
            cin>>a;
            if(i%2!=0)
            {
                sum=sum+a;
            }
            else
            {
                sum=sum-a;
            }
            i++;
        }
        cout<<sum<<endl;
    }
    return 0;
}