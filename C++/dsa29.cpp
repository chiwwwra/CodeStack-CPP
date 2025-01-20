#include<iostream>
using namespace std;
int main()
{
    int i=0,n;
    cin>>n;
    while(i<n)
    {
        int j=0,space=i,k=(n-i);
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(k)
        {
            cout<<"*";
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}