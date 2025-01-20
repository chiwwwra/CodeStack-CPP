#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int j=1,k=1,space=n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(j<=i)
        {
            cout<<k;
            k++;
            j++;
        }
        int r=i-1;
        while(r)
        {
            cout<<r;
            r--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}