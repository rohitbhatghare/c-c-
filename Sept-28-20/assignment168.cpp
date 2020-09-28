#include<iostream>
using namespace std;
int main()
{
   int mn=0,mx=1,temp,i,n;
   cout<<"Enter of terms to  display : \n";
   cout<<n;
   cout<<"The Fibonacci series upto  to %d terms : \n"<<n;
   cout<<mn<<"    "<<mn;

  for(i=3;i<=n;i++)
   {
     temp=mn+mx;
     cout<<temp;
     mn=mx;
     mx=temp;
   }
   cout<<"\n";


    return 0;
}
