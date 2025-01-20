#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<10)
    {   
        cout<<i<<" ";
        while(i%3==0)
        {
            cout<<endl;
            break;
        }
    i++;
    }
    return 0;
}