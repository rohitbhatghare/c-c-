#include <iostream>
using namespace std;
int main()
{
   
    int a[24];
    int n,i;
     cout<<"enter the elements in array"<<endl;
    cin>>n;
    
    cout<<"enter the 1st array element"<<endl;
    for (i =0 ; i < n; i++)
    {
       cin>>a[i];
       }
       cout<<"the even numbers are "<< a[i] <<endl;
       for (i =0 ; i < n; i++)
    {
        if ( a[i] % 2 == 0)
        cout<<a[i];
       }
       cout<<"the odd numbers are "<< a[i] <<endl;
       for(i=0;i<n;i++)
       {
           if ( a[i] % 2 == 1)
           cout<<a[i];
       }
      
       
       
    
      
   return 0;
}