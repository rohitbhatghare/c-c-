#include <iostream>
using namespace std;
int main()
{
  int a[50][50],b[50][50],c[50][50],i,j,n;


        cout<<"Input the size of the square matrix 1-5: \n";
       cin>>n;


       cout<<"Input elements in the first matrix :\n";
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {

	           cin>>a[i][j];
            }
        }

       cout<<"Input elements in the second matrix :\n";
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {

	           cin>>b[i][j];
            }
        }
   cout<<"\nThe First matrix is :\n";
  for(i=0;i<n;i++)
    {
      cout<<"\n";
      for(j=0;j<n;j++)
          cout<<"\t"<<a[i][j];
    }

  cout<<"\nThe Second matrix is :\n";
  for(i=0;i<n;i++)
    {
      cout<<"\n";
      for(j=0;j<n;j++)
          cout<<"\t"<<b[i][j];
    }


   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            c[i][j]=a[i][j]*b[i][j];
   cout<<"\nThe Multiplication of two matrix is : \n";
   for(i=0;i<n;i++)

    {
       cout<<"\n";
       for(j=0;j<n;j++)
            cout<<"\t"<<c[i][j];
   }
   cout<<"\n\n";
   return 0;
}
