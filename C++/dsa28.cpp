#include<iostream>
using namespace std;
int main()
{
    int i=0,n;
    cin>>n;
    while(i<n)
    {
        int j=0;
        while(j<(n-i))
        {
             cout<<"* ";
             j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}