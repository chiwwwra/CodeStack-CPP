//Linear Search in array
#include<bits/stdc++.h>
using namespace std;
bool find(int arr[],int n,int search)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        return 1;
    }
    return 0;
}
int main()
{
    int n,arr[50],search,j;
    cout<<"Enter the size of array and the element you want to search respectively:  "<<endl;
    cin>>n>>search;
    cout<<"Enter the elements of an array: "<<endl;
    for(j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    bool found=find(arr,n,search);
    cout<<boolalpha<<found<<endl;
}
/*bool find(int arr[],int n,int search)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        return 1;
    }
    return 0;
}*/