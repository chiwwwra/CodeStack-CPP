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
            char ch='A'+j;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}