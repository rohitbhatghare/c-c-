#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[90],len,min,pos ,i;
    cout<<"Enter the length of array";
    cin>>len;
    for(i=0;i<len;i++)
    {

       cin>>a[i];
    }
       min=a[0];
       for(i=0;i<len;i++)
       {
           if(min>=a[i])
           {
               min=a[i];
               pos=i;
           }
       }
       cout<<"smallest value is\t"<<min<<"\n";
       cout<<"position of element is \t"<<pos;
       return 0;
}


