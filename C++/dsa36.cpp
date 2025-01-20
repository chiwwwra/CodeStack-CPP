#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n;
    cin>>n;
    while(i<n)
    {
        int j=n,k=1,m=i,z=i,space=n-i;
        while(j>i)
        {
            cout<<k;
            k++;
            j--;
        }
        while(m)
        {
            cout<<"*";
            m--;
        }
        while(z)
        {
            cout<<"*";
            z--;
        }
        while(space)
        {
            cout<<space;
            space--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}