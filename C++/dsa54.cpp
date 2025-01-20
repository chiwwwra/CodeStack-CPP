//Reverse an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50],size;
    cout<<"Enter the size of an array: "<<endl;
    cin>>size;
    cout<<"Enter the elements of an array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<(size/2);j++)
    {
        swap(arr[size-j-1],arr[j]);
    }
    for(int l=0;l<size;l++)
    {
        cout<<arr[l];
    }
}