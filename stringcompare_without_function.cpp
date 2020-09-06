#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char st[80],sp[80];
     int i,res;
     cout<<"\n Enter First string : ";
     cin>>st;
     cout<<"\n Enter Second string : ";
     cin>>sp;
     for(i=0;st[i]==sp[i] && st[i]=='\0';i++);
        if(st[i] < sp[i])
         {
             cout<<"\n String is less than string 2  "<<endl;
         }
         else if(st[i] > sp[i])
         {
             cout<<"\n String 1 is greater than string 2"<<endl;
         }
         else
         {
             cout<<"\n Both strings are Equal"<<endl;
         }

     return 0;
}
