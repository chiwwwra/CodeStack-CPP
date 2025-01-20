#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,note=0;
    cin>>n;
    switch(1)
    {
        case 1:
                note=n/100;
                cout<<"100 Rs. Notes : "<< n/100<<endl;
                n=n-(note*100);
        case 2:
                note=n/50;
                cout<<"50 Rs. Notes: "<< n/50<<endl;
                n=n-(note*50);
        case 3:
                note=n/20;
                cout<<"20 Rs. Notes: "<< n/50<<endl;
                n=n-(note*20);
        case 4:
                note=n/1;
                cout<<"1 Rs. Notes: "<< n<<endl;
                n=n-(note*1);
    }
}