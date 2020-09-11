#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,min,max,avg,sum=0,ctr=0;
    cout<<" Enter the values"<<endl;
   cin>>n;
   if(n<=0)
   {
       return 0;
   }
   min=n;
   max=n;
   while(n>0)
   {
       sum=sum+n;
        ctr++;

       if(n>max)
       {
           max=n;
       }
       if(n<min)
       {
        min= n;
       }
       cout<<"\n Enter positve numbers"<<endl;
       cin>>n;

   }
    avg=sum/(double)ctr;

    cout<<"Number of +ve numbers are"<<ctr<<endl;
    cout<<"Maximum number"<<max<<endl;
    cout<<"Minimum number"<<min<<endl;
    cout<<"Average is"<<avg;
    return 0;
}
