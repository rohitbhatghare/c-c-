#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int rl,e,m,s,tot;
    float per;
    char num[50],div[20];
    cout<<"Input the Roll Number of the student :\n";
    cin>>rl;
    cout<<"Input the Name of the Student :\n";
    cin>>num;
    cout<<"Input  the marks of English, Maths and Science : \n";
    cin>>e>>m>>s;
    tot = e+m+s;
    per = tot/3.0;
    if (per>=60)

	 cout<<"First \n";
    else
	if (per<60&&per>=48)

	    cout<<"Second \n";
	else
	    if (per<48&&per>=36)
		cout<<"Pass";
	     else
		cout<<"Fail";

       cout<<"\nRoll No :" <<rl<<"\nName of Student : \n"<<num;
       cout<<"Marks in English :"<<e<<"\nMarks in maths :"<<m<<"Marks in Science : \n"<<s;
       cout<<"Total Marks ="<<tot<<" \nPercentage = "<<per<<"Division = "<<div;

       return 0;
}
