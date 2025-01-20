#include <bits/stdc++.h>
using namespace std;

/*int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t>0)
    {
        int n,sum=0,rem=0,i=1;
        cin>>n;
        while(n!=0)
        {
            rem=n%10;
            if(i=1 || n<10)
            {
            sum=sum+rem;
            }
            n=n/10; 
            i++;
        }
        std::cout << sum << std::endl;
        t--;
    }
}*/
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int x=0,y=0,m=0,count1=0,count2=0;
        cin>>x>>y;
        m=y;
        while((x-2*m)<0)
        {
            m--;
            count1++;
        }
        //cout<<count1<<endl;
        //cout<<x<<endl<<y<<endl;
        while((y-2*x)<0)
        {
            x--;
            count2++;
        }
        //cout<<count2<<endl;
        if(count1>=count2)
        {
            cout<<count2<<endl;
        }
        else
        {
            cout<<count1<<endl;
        }
        t--;
    }
}