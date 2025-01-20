#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int i=1,fact=0,num=0;
    cin>>fact;
    num=fact;
    do
    {
       fact=fact*i; 
       i++;
    }
    while(i<num);
    cout<<fact;
    return 0;
}