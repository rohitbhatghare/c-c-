#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char st[8];

cout<<"\n Enter the name";
cin>>st;
strrev(st);
cout<<"\n The reverse of string is:"<<st;
getch();

}