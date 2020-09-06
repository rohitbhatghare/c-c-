#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char st[8];
char sp[8];

cout<<"\n Enter the first name";
cin>>st;
cout<<"\n Enter the second name";
cin>>sp;
int res=strcmp(st,sp);
if(res==0)
{
cout<<"\n strings are equal";
}
else
 {
cout<<"\n strings are not equal";
}
getch();

}