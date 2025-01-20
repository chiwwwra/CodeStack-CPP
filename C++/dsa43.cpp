#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char ch;
    cin>>a>>b>>ch;
    switch(ch)
    {
        case '+':
                cout<<a+b<<endl;
                break;
        case '-':
                cout<<a-b<<endl;
                break;
        case '*':
                cout<<a*b<<endl;
                break;
        case '/':
                cout<<a/b<<endl;
                break;
        case '%':
                cout<<a%b<<endl;
                break;
        default:
                cout<<"Invalid Input"<<endl;  
    }
}