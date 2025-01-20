#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,max=0,k=0;
    cin>>n;
    while(n--)
    {
        long int s,t;
        cin>>s>>t;
        if(abs(s-t)>max)
        {
            max=abs(s-t);
            if(s>t)
            {
                k=1;
            }
            else
            {
                k=2;
            }
        }
    }
    std::cout << k <<" "<< max << std::endl;
    return 0;
}
