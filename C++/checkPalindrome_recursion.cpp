/* //Program to check whether the given string is a palindrome or not
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s,int i,int j)
{
    //base case
    if(i>=j) return true;
    if(s[i]!=s[j]){
        return false;
    } 
    else{
        return checkPalindrome(s,i+1,j-1);
    }
}
int main()
{
    string name;
    cin>>name;
    if(checkPalindrome(name,0,name.length()-1))
    {
        cout<<"Given string is a Palindrome"<<endl;
    }
    else
    {
        cout<<"Given string is not a Palindrome"<<endl;
    }
} */
//Program to check whether the given string is a palindrome or not with using only i
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s,int i)
{
    //base case
    if(i>=(s.length()-i-1)) return true;
    if(s[i]!=s[s.length()-i-1]){
        return false;
    } 
    return checkPalindrome(s,i+1);
}
int main()
{
    string name;
    cin>>name;
    if(checkPalindrome(name,0))
    {
        cout<<"Given string is a Palindrome"<<endl;
    }
    else
    {
        cout<<"Given string is not a Palindrome"<<endl;
    }
}