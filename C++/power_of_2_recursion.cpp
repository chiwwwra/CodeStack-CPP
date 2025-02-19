//Power of 2 using recursion
#include <iostream>
using namespace std;
int powof2(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return 2*powof2(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int ans=powof2(n);
    cout<<ans<<endl;
}