#include<iostream>
using namespace std;
int main()
{
    int i=0;
    while(i<3)
    {   
        int j=0;
        while(j<3)
        {
          cout<<"*"<<" ";
          j++;
        }
        cout<<'\n';
        i++;
    }
    return 0;
}