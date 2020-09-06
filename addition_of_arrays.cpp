#include <iostream>
using namespace std;
int main()
{
   
    int a[24];
    int b[24];
    int c[24];
    int n,i;
    cout<<"enter the elements in array"<<endl;
    cin>>n;
    
    cout<<"enter the 1st array element"<<endl;
    for (i =0 ; i < n; i++)
    {
       cin>>a[i];
    }
   cout<<"enter the number in 2nd array element"<<endl;
   for(i= 0 ;i < n;i++)
   {
      cin>>b[i];
   }

    cout<<" the sum of array is"<<endl;
   for (i =0 ; i < n; i++) 
    {
       c[i]=a[i]+b[i];
       cout<<c[i]<<endl;
    }
    return 0;
}