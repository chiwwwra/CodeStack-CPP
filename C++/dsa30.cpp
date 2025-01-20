#include<iostream>
using namespace std;
int main()
{
    int i=0,n,j=1;
    cin>>n;
    while(i<n)
    {
        int space=i,k=n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(k)
        {
            cout<<j;
            k--;
        }
        cout<<endl;
        j++;
        i++;    
    }
    return 0;
}