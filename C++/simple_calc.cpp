/* //Simple Calculator
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin>>x>>y;
    cout<<x <<" + "<< y<<" = "<<x+y<<endl;
    cout<<x <<" * "<< y<<" = "<<x*y<<endl;
    cout<<x <<" - "<< y<<" = "<<x-y<<endl;
    return 0;
} */
//Two numbers
/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"floor "<<x <<" / "<< y<<" = "<<floor(x*1.0/y)<<endl;
    cout<<"ceil "<<x <<" / "<< y<<" = "<<ceil(x*1.0/y)<<endl;
    cout<<"round "<< x <<" / "<< y <<" = "<<round(x*1.0/y)<<endl;
    return 0;
} */
//Min and Max in a given numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    cout<< a <<" "<< c <<endl;
    return 0;
}
