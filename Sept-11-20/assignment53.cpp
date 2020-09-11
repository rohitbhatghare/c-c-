#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{

char st1[80], st2[80];
int i;
cout<<"Input a string";
cin>>st2;

for(i=0; st2[i]!='\0'; i++)
st1[i]=st2[i];
st1[i]='\0';
cout<<"\n";
cout<<"Original string: "<<st1;
cout<<"\nNumber of characters = "<<i;
return 0;
}
