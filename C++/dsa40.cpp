#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1,sum=0,rem=0;
        cin>>n;
        while(n)
        {
            rem=n%10;
            sum=sum+rem;
            pro=pro*rem;
            n=n/10;
        }
        cout<<abs(pro-sum)<<endl;
        return 0;
    }
};