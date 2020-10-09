#include <iostream>
using namespace std;
int main()
{
  int a[50][50],b[50][50],c[50][50],i,j,n,r;


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
 cout<<"\nThe matrix is :\n";
  		for(i=0;i<r;i++)
    		{
      		cout<<"\n";
      		for(j=0;j<n;j++)
          	cout<<"\t",a[i][j];
    		}

  for(i=0;i<r;i++)
     {
      for(j=0;j<n;j++)
            {
                   b[j][i]=a[i][j];
            }
      }

     cout<<"\n\nThe transpose of a matrix is : ";
      for(i=0;i<n;i++)
        {
      cout<<"\n";
      for(j=0;j<r;j++)
      {
          cout<<"\t",b[i][j];
      }
  }
     cout<<"\n\n";
     return 0;
}
