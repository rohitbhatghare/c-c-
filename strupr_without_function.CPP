#include<iostream>
#include<conio>
#include<string>
void main()
{
clrscr();
char st[80];
cout<<"\n Enter the first name";
cin>>st;
for(int i=0;st[i]!='\0';i++)
{
	if(st[i]>='a'&& st[i]<='z')
	{
	st[i]=st[i]-32;
	}
	cout<<endl<<i;
}
getch ();
}
