#include <iostream>
using namespace std;

int main()
{
  int a1[3][3],i,j;

       cout<<"Enter elements in the matrix :\n";
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {

	      cin>>a1[i][j];
      }
  }

 cout<<"\nThe matrix is : \n";
  for(i=0;i<3;i++)
  {
      cout<<"\n";
      for(j=0;j<3;j++)
           cout<<"\t"<<a1[i][j];
  }
 cout<<"\n\n";
 return 0;
}
