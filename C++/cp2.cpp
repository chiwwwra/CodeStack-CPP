/*//Sort Numbers or arranging no.s in ascending order
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=b && a<=c)
    {
        cout<<a<<endl;
        if(b<=c)
        {
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<endl;
            cout<<a<<"\n"<<b<<"\n"<<c;
        }
        else
        {
            cout<<c<<endl;
            cout<<b<<endl;
            cout<<endl;
            cout<<a<<"\n"<<b<<"\n"<<c;
        }
    }
    else if(b<=a && b<=c)
    {
        cout<<b<<endl;
        if(a<=c)
        {
            cout<<a<<endl;
            cout<<c<<endl;
            cout<<endl;
            cout<<a<<"\n"<<b<<"\n"<<c;
        }
        else
        {
            cout<<c<<endl;
            cout<<a<<endl;
            cout<<endl;
            cout<<a<<"\n"<<b<<"\n"<<c;
        }
    }
    else
    {
        cout<<c<<endl;
        if(a<=b)
        {
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<endl;
            cout<<a<<"\n"<<b<<"\n"<<c;
        }
        else
        {
            cout<<b<<endl;
            cout<<a<<endl;
            cout<<endl;
            cout<<a<<"\n"<<b<<"\n"<<c;
        }
    }
    return 0;
}*/
//Sort Numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=a,y=b,z=c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
}