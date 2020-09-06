#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char st[80];
char sp[80];

cout<<"\n Enter the first name";
cin>>st;
cout<<"\n Enter the second name";
cin>>sp;

strcat(st,sp);
cout<<"\n comparison of two string is :"<<st;
getch();

}