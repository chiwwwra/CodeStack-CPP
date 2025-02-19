//Implementation of Bubble sort using recursion
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr,int size)
{
    if(size==0||size==1) return;//base case
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    return bubbleSort(arr,size-1);
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}