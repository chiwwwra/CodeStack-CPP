#include<iostream>
using namespace std;
int main()
{
    int i=0,n;
    cin>>n;
    while(i<n)
    {
        int j=0;
        char ch='A'+i;
        while(j<=i)
        {   
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}