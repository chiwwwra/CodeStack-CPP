//Swapping alternate elements inside an array
#include <bits/stdc++.h>
using namespace std;
/*void swap(int arr[],int size)
{
    if(size%2!=0) 
    {
        size--;
    }
    for(int i=0;i<size;i=i+2)
    {
        swap(arr[i],arr[i+1]);
    }
}*/
void swap(int arr[],int size)
{
    for(int i=0;i<size;i=i+2)
    {
        if(i+1<size) 
        {
            swap(arr[i+1],arr[i]);
        }
    }
}
void printArray(int arr[],int size)
{
    cout<<"Required array is ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[60],size;
    cout<<"Enter the size of an array:  "<<endl;
    cin>>size;
    cout<<"Enter the elements of an array :  "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    swap(arr,size);
    printArray(arr,size);
}