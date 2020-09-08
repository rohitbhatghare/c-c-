#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char st[5];
    int pnr;
    int i;
    int nnr;
    cout<<"\n Enter first number ";
    cin>>st[0];
     cout<<"\n Enter second number ";
    cin>>st[1];
     cout<<"\n Enter third number ";
    cin>>st[2];
     cout<<"\n Enter fourth number ";
    cin>>st[3];
     cout<<"\n Enter fifth number ";
    cin>>st[4];
    for(i=0;i<=5;i++)
    {
        if(st[i]>0)
        {
         pnr++;
        }

        else if(st[i]<0)
        {
            nnr++;
        }
    }
    cout<<"the positive numbers are"<<pnr<<endl;
   cout<<"the negative numbers are"<<nnr<<endl;
   cout<<endl;
    return 0;
}
