//Finding maximum and minimum element inside the array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[50],i;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int mini=arr[0],maxi=arr[0];
    for(i=1;i<size;i++)
    {
        //Finding minimum and maximum value inside array using min and max function
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    cout<<"Maximum value is "<<maxi<<"\n"<<"Minimum value is "<<mini<<endl;
}