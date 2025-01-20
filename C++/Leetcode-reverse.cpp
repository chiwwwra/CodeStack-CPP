int main()
{
class Solution {
public:
    int reverse(int x) {
        int rem=0;
        long long rev=0;
        while(x!=0)
        {
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(x<0)
        {
            return -rev;
        }
        else
        {
            return rev;
        }
    }
};
}