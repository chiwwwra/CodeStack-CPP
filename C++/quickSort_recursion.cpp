//Program to implement Quick Sort using recursion
#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr,int s,int e)
{
    int count=0,pivot=arr[s];
    for(int i=s+1;i<=e;i++)
    {
        if(pivot>=arr[i])
        {
            count++;
        }
    }
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex &&j>pivotIndex)
    {
        while(arr[i]<arr[pivotIndex])
        {
            i++;
        }
        while(arr[j]>arr[pivotIndex])
        {
            j--;
        }
        if(i<pivotIndex &&j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(vector<int>& arr,int s,int e)
{
    //base case
    if(s>=e) return;
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main()
{
    int n,s=0;
    cin>>n;
    int e=n-1;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,s,e);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}