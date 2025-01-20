#include<iostream>
using namespace std;
int main()
{
    int i=0,n;
    char ch='A';
    cin>>n;
    while(i<n)
    {
        int j=0;
        while(j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}