#include<iostream>
using namespace std;
int main()
{
    int i=0,n;
    cin>>n;
    while(i<n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}