#include<iostream>
using namespace std;
int main()
{
    int n,i=1,space;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        space =n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}