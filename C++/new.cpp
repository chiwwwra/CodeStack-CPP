#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,sum=0;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        if((n%2)!=0) 
        {
            std::cout << "-1" << std::endl;
        }
        else
        {
            while(n--)
            {
                int a;
                cin>>a;
                sum=sum+a;
            }
            cout<<sum/2<<endl;
            sum=0;
        }
    }
    return 0;
}