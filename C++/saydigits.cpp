//print the digits in a given number
#include <iostream>
using namespace std;
void saydigits(int n,string arr[])
{
    if(n==0)
    {
        return;
    }
    int digit=n%10;
    saydigits(n/10,arr);
    cout<<arr[digit]<<" ";
}
int main()
{
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    saydigits(n,arr);
    return 0;
}