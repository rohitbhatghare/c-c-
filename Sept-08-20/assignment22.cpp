#include<iostream>
#include<conio.h>
using namespace std;



int main()
{
	int pw, i=10;

	while (i!=0)

	{
	cout<<"\n Enter pin: (Only in Numbers)";
	cin>>pw;

	if (pw==1234)
	{
		cout<<"Correct pin"<<endl;
		i=0;
    }
    else
    {
       cout<<"Wrong pin"<<endl;
	}
		}
	return 0;
}
