#include<iostream>
using namespace std;
int main()
{
    int i=0,n;
    char a;
    cin>>n;
    for(i=0;i<n;i++)
    {   
        for(int j=0;j<n;j++)
        {
            a='A'+i;
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}