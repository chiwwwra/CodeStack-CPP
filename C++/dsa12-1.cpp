#include<iostream>
using namespace std;
int main()
{
    int i=1,count=1,n;
    cin>>n;
    while(i<=n)
    {   
        int j=1;
        while(j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}