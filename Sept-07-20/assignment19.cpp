#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 char    st[5];
 int t;
       cout<<"\n Enter first number : ";
    cin>>st[0];
    cout<<"\n Enter second number : ";
    cin>>st[1];
    cout<<"\n Enter third number : ";
    cin>>st[2];
    cout<<"\n Enter fourth number : ";
    cin>>st[3];
    cout<<"\n Enter fifth number : ";
    cin>>st[4];
   for(int i=0;i<=5;i++)
   {

       if((st[i]%2)==0)
        {
        t+=st[i];
       }
   }
        cout<<"\n the sum of even numbers are "<<t<<endl;;


    return 0;
}
