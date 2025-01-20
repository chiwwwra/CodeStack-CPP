#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int fact=1,n;
        cin>>n;
        while(n!=1)
        {
            fact=fact*n;
            n--;
        }
        std::cout << fact << std::endl;
    }
    return 0;
}
