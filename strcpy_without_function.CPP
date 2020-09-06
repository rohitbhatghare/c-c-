#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char st[80];
char sp[80];int i;

cout<<"Enter name which want to copy   ";
cin>>st;
for(i=0;st[i]!='\0';++i)
{
sp[i]=st[i];
}
sp[i]='\0';

cout<<sp;

getch();
}

