#include<iostream>
using namespace std;
int main()
{
    int i=1,n,k=1;
    cin>>n;
    while(i<=n)
    {
        int space=n-i,j=0;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(j<i)
        {
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}