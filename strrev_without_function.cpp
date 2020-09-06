#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main() {
  	char st[80];
  	int i,ln=0;
  	cout<<"\n Enter the String : ";
  	cin>>st;
	for(i=0;st[i]!='\0';i++)
	{
	    ln++;
	}
  	cout<<"\n Reverse String Is : ";
  	for(;ln>=0;ln--)
    {
    	{
        cout<<st[ln];
    }
    	}
  	return 0;
}
