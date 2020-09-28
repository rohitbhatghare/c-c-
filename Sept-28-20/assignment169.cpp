#include<iostream>
using namespace std;
int main()
{
   int j,i,n,sum;
   cout<<"Enter of terms to  display : \n";
   cin>>n;
   for(i=n;n!=0;n=n%10)
   {
     j=n%10;
     sum=sum*10+j;
   }
   cout<<"Reverse order   "<<sum;


    return 0;
}
