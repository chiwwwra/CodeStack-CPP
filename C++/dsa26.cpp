#include<iostream>
using namespace std;
int main()
{
    int i=0,n;
    char ch,a;
    cin>>n>>ch;
    a=ch;
    while(i<n)
    {
        int j=0;
        ch=ch-i;
        while(j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        ch=a;
        i++;
    }
    return 0;
}