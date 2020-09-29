#include<iostream>
#include <math.h>
using namespace std;


int main()
{
      int i,n,a[100];

    cout<<"Input the number of elements to store in the array :";
   cin>>n;

   cout<<"Input %d number of elements in the array :\n"<<n;
   for(i=0;i<n;i++)
      {
	  cout<<"element : "<<i;
	  cin>>a[i];
	  }

   cout<<"\nThe values store into the array are : \n";
   for(i=0;i<n;i++)
     {
	   cout<<a[i];
	 }

   cout<<"\n\nThe values store into the array in reverse are :\n";
   for(i=n-1;i>=0;i--)
      {
	   cout<<a[i];
	  }
   cout<<"\n\n";
   return 0;
}
