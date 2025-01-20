#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    // Complete the code.
    int a,b;
    cin>>a>>b;
    int t=a;
    while(t<=b)
    {   
            if (t==1) 
            {
            cout<<"one"<<endl;
            }
            else if (t==2) {
            cout<<"two"<<endl;
            }
            else if (t==3) {
            cout<<"three"<<endl;
            }
            else if (t==4) {
            cout<<"four"<<endl;
            }
            else if (t==5) {
            cout<<"five"<<endl;
            }
            else if (t==6) {
            cout<<"six"<<endl;
            }
            else if (t==7)
            {
            cout<<"seven"<<endl;
            }
            else if(t==8)
            {
            cout<<"eight"<<endl;
            }
            else if (t==9)
            {
            cout<<"nine"<<endl;
            }
            else if(t%2==0)
            {
            cout<<"even"<<endl; 
            }
            else if(t%2!=0)
            {
            cout<<"odd"<<endl;
            }
    }
    t++;
    return 0;
}
