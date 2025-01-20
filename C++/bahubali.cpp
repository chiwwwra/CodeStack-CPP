#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,sum=0,odd=0,a;
    cin>>n;
    while(n>0)
    {
        cin>>a;
        if(a%2==0)
        {
            sum++;
        }
        else
        {
            odd++;
        }
        n--;
    }
    if(sum>odd)
    {
        std::cout << "READY FOR BATTLE" << std::endl;
    }
    else
    {
        std::cout << "NOT READY" << std::endl;
    }
    return 0;
}
