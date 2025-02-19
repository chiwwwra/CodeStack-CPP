#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        int l=-1,r=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && l==-1)
            {
                l=i;
            }
            r=i;
        }
        if(l==-1)
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=l;i<=r;i++)
        {
            if(s[i]=='0')
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}