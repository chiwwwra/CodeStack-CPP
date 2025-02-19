//Program to reverse string using recursion
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
void stringReverse(int i,int j,string& s)
{
    if(i>=j) return;
    swap(s[i],s[j]);
    i++;
    j--;
    stringReverse(i,j,s);
}
int main()
{
    string s;
    cin>>s;
    int i=0,j=s.length()-1;
    stringReverse(i,j,s);
    cout<<s<<endl;
    return 0;
}