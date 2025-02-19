/* //Swap two numbers using xor operator
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b<<endl;
} */
//sort three numbers
#include<iostream>  
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    cout<<a<<" "<<b<<" "<<c<<endl;
}