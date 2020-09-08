#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int amt,tot;
    cout<<"Enter the amount"<<endl;
	cin>>amt;
	tot=(int)amt/100;
	cout<<"100 ruppes notes are  :"<<tot<<endl;
	amt=amt-(tot*100);
	tot=(int)amt/50;
	cout<<"50 rupees notes are :"<<tot<<endl;
	amt=amt-(tot*50);
	tot=(int)amt/20;
	cout<<"20 rupees notes are :"<<tot<<endl;
	amt=amt-(tot*20);
	tot=(int)amt/10;
	cout<<"10 rupees notes are :"<<tot<<endl;
	amt=amt-(tot*10);
	tot=(int)amt/5;
	cout<<"5 rupees notes are :"<<tot<<endl;
	amt=amt-(tot*5);
	tot=(int)amt/2;
	cout<<"2 rupees notes are :"<<tot<<endl;
	amt=amt-(tot*2);
	tot=(int)amt/1;
	cout<<"1 rupees notes are :"<<tot<<endl;
	return 0;
}


