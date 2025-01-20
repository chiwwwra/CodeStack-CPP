//To find the sum of all the elements of a given array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,inp[50],sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>inp[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+inp[i];
    }
    cout<<sum<<endl;
    return 0; 
}