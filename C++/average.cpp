#include<iostream>
using namespace std;
int main()
{
    float total_grades =0,num_grades=0,average=0;
    char grade;
    cout<<"Enter a Grade(S,A,B,C,D,E) Or q to quit"<<endl;
    cin>>grade;
    while(grade!='q')
    {   
        num_grades++;
        if(grade=='S')
        {
            total_grades=total_grades+10;
        }
        else if (grade=='A')
        {
            total_grades=total_grades+9;
        }
        else if (grade=='B')
        {
            total_grades=total_grades+8;
        }
        else if (grade=='C')
        {
           total_grades=total_grades+7;
        }
        else if (grade=='D')
        {
            total_grades=total_grades+6;
        }
        else if (grade=='E')
        {
            total_grades=total_grades+5;
        }
        cout<<"Enter a Grade(S,A,B,C,D,E) Or q to quit"<<endl;
        cin>>grade;
    }
    if(total_grades!=0)
    {
        average=total_grades/num_grades;
        cout<<endl<<"Average="<<average<<endl;
    }
    else
    {
        cout<<"No Grades Entered"<<endl;
    }
    return 0;
}    