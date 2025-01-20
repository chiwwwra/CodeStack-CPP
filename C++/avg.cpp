#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t>0)
    {
        float a,b,c;
        float avg;
        cin>>a>>b>>c;
        avg=((a+b)/2);
        cout<<avg;
        if(avg>c)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        t--;
    }
    return 0;
}
