//Program to find the sum of numbers in the array using recursion
#include<bits/stdc++.h>
using namespace std;
int Sum(int arr[],int n)
{
    if(n==0) return 0;
    if(n==1) return arr[0];
    return arr[0]+Sum(arr+1,n-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=Sum(arr,n);
    cout<<sum<<endl;
}