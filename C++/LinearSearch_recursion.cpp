//To perform linear search using recursion
#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int n,int target)
{
    if(n==0) return false;
    if(arr[0]==target) return true;
    return linearSearch(arr+1,n-1,target);
}
int main()
{
    int n,key;
    cin>>n>>key;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(linearSearch(arr,n,key))
    {
        cout<<"Target found"<<endl;
    }
    else
    {
        cout<<"Target not found"<<endl;
    }
}