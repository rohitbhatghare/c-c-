#include<iostream>
using namespace std;

int main()
{
   int j,i,n;
   cout<<"Input upto the table number starting from 1 : \n";
   cin>>n;
   cout<<"Multiplication table from 1 to \n"<<n;
   for(i=1;i<=10;i++)
   {
     for(j=1;j<=n;j++)
     {
       if (j<=n-1)
       {
                     cout<<j<<"x"<<i<<" = "<<i*j<<endl;;

       }
          else
          {
            	    cout<<j<<"x"<<i<<" = "<<i*j<<endl;

          }


      }
     cout<<"\n";
   }
    return 0;
}
