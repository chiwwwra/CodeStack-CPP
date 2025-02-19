//Program to search an element in an array using binary Search and Implementation of binary search using recursion
#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int>& arr,int start,int end,int target)
{
    int mid=start+(end-start)/2;
    if(start>end) return false;
    if(arr[mid]==target) return true;
    if(arr[mid]<target) return binarySearch(arr,mid+1,end,target);
    if(arr[mid]>target) return binarySearch(arr,start,mid-1,target);
}
int main()
{
    int n,key;
    cin>>n>>key;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; 
    }
    sort(arr.begin(),arr.end());
    if(binarySearch(arr,0,n-1,key))
    {
        cout<<"Target Found"<<endl;
    }
    else
    {
        cout<<"Target not found"<<endl;
    }
}
