#include<iostream>
#include<conio.h>
using namespace std;


void div(int a,int b,int i,int temp)
{

        int div;
        if(a>b)
        {
           temp=b;
           a=b;
           a=temp;
        }
           for(i<a+1;i<=b;i++)
           {
               if((i%7)==2 || (i%7)==3)
               {
                   cout<<"\n\n\nThe Numbers which divided by 7 are :  "<<i;
               }
           }


}


int main()
{


        int a,b,temp,i;
    cout<<"\n Enter first number "<<endl;
    cout<<"a="<<endl;
    cin>>a;
    cout<<endl;
     cout<<"\n Enter second number"<<endl;
   cout<< "b="<<endl;
    cin>>b;

        div(a,b,temp,i);
    return 0;
}
