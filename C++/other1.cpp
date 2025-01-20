#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t>0)
    {
        int n=0,rem=0,i=0,j=0,k=0,sum=0;
        cin>>n;
        k=n;
        while(n!=0)
        {
            rem=n%10;
            if(i==0)
            {
                j=rem;
            }
            i++;
            n=n/10; 
        }
        n=k/pow(10,i-1);
        sum=n+j;
        std::cout << sum << std::endl;
        t--;
    }
    return 0;
}
