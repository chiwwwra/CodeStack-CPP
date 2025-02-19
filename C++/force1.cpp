/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<6-(a+b)<<endl;
    return 0;
}*/
//program to check whether the given number is alphabet(capital/small) or digit
/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin>>s;
    if(s>='0' && s<='9'){
    cout<<"IS DIGIT"<<endl;   
    }
    if(s>='a' && s<='z'){
    cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    if(s>='A' && s<='Z'){
    cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    return 0;
} */
/* //Program to convert uppercase character to lowercase and vice-versa
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin>>s;
    if(s>='a' && s<='z'){
    cout<<(char)(s-32)<<endl;
    }
    if(s>='A' && s<='Z'){
    cout<<(char)(s+32)<<endl;
    }
    return 0;
} */
//Program to perform operation on given inputs based on the given operations
/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    char s;
    cin>>s;
    int b;
    cin>>b;
    if(s=='+'){
    cout<<a+b<<endl;
    }
    if(s=='-'){
    cout<<a-b<<endl;
    }
    if(s=='*'){
    cout<<a*b<<endl;
    }
    if(s=='/'){
    cout<<a/b<<endl;
    }
    return 0;
} */
//Program to print whether the first digit is even or odd of a given number
/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    while(n!=0)
    {
        ans=n%10;
        n/=10;
    }
    if((ans&1)==0){
    cout<<"EVEN"<<endl;
    }
    else{
    cout<<"ODD"<<endl;
    }
    return 0;
} */
//Program to print the quadrant in which given point is present
/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y;
    cin>>x>>y;
    if(x==0 && y==0){
    cout<<"Origem"<<endl;
    }
    else if(x==0)
    {
    cout<<"Eixo y"<<endl;
    }
    else if(y==0){
    cout<<"Eixo x"<<endl;
    }
    else if(x>0 && y>0)
    {
    cout<<"Q1"<<endl;
    }
    else if(x<0 && y>0)
    {
    cout<<"Q2"<<endl;
    }
    else if(x<0 && y<0)
    {
    cout<<"Q3"<<endl;
    }
    else
    {
    cout<<"Q4"<<endl;
    }
    return 0;
} */
/* //Age in Days
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=365)
    {
        int year=n/365;
        cout<<year<<" years"<<endl;
        n=n-((365)*year);
    }
    else
    {
        cout<<"0 years"<<endl;
    }
    if((n>=30))
    {
        int month=n/30;
        cout<<month<<" months"<<endl;
        n=n-((30)*month);
    }
    else
    {
        cout<<"0 months"<<endl;
    }
    if(n<30 && n>0)
    {
        cout<<n<<" days";
    }
    else
    {
        cout<<"0 days";
    }
    return 0;
} */
//Interval Program
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin>>x;
    if((x<0)||(x>100))
    {
        cout<<"Out of Intervals"<<endl;
    }
    if(x>=0 && x<=25)
    {
        cout<<"Interval"<<" [0,25]"<<endl;
    }
    if(x>25 && x<=50)
    {
        cout<<"Interval"<<" (25,50]"<<endl;
    }
    if(x>50 && x<=75)
    {
        cout<<"Interval"<<" (50,75]"<<endl;
    }
    if(x>75 && x<=100)
    {
        cout<<"Interval"<<" (75,100]"<<endl;
    }
    return 0;
}