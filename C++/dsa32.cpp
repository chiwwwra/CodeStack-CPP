#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int space=i-1,k=i,p=n-k+1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(p)
        {
            cout<<k;
            k++;
            p--;
        }
        cout<<endl;
        i++;
    } 
    return 0;
}