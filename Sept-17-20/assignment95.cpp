#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{  int a[1000],n ,i;
    cout<<"enter the size of the array:\n";
  cin>>n;
  cout<<"enter the elements of the array:\n";
 for(i=0; i<n; i++)
 {
     cin>>a[i];
 }

 if(n%2==1)
 {

 cout<<"middle element of array is : \n"<<a[n/2];
 }
  else if(n%2==0)
  {
      cout<<"middle elements are : "<<a[n/2-1]<<"\n"<<a[n/2];
  }
  return 0;
}
