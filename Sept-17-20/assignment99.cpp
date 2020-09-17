#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{  int a[1000],n ,i;

  cout<<"enter the elements of the array:\n";
 for(i=0; i<=2; i++)
 {
     cin>>a[i];
 }

 if(a[0]==10 && a[0]==15 && a[1]==12 && a[1]==15 &&  a[2]==12 && a[2]==15 )
 {

 cout<<"True \n";
 }
  else
  {
      cout<<"False \n";
  }
  return 0;
}
