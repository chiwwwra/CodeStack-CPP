#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        while(n--)
        {
            int x;
            cin>>x;
            if(x>=1000)
            {
                count++;
            }
            std::cout << count << std::endl;
            count=0;
        }
    }
    return 0;
}
