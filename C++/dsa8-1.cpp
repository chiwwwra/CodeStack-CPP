#include<iostream>
using namespace std;
int main()
{
    int i=0,n;
    cin>>n;
    while(i<n)
    {   
        int j=0;
        while(j<n)
        {
          cout<<"*"<<" ";
          j++;
        }
        cout<<'\n';
        i++;
    }
    return 0;
}