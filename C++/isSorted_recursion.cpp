//Check whether the given array is sorted or not using recursion
#include <iostream>
using namespace std;
bool isSorted(int arr[],int n)
{
    if(n==1 || n==0) return true;
    if(arr[0]>arr[1]) return false;
    return isSorted(arr+1,n-1);
}
int main()
{
    int arr[100]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(isSorted(arr,n)==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

}