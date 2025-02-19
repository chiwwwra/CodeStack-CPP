//Program to print natural numbers from n to 1 using recursion
#include<iostream>
using namespace std;
void number(int n)
{
    if(n==0)
    {
        return;
    }
    else{
        cout<<n<<endl;
        number(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    number(n);
}