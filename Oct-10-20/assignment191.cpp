#include <iostream>
using namespace std;

int main()
{
  int a1[50],n,i,j=0,temp,temp2;

       cout<<"Enter the size of array : \n";
       cin>>n;
    cout<<"Enter elements in the array :\n";
       for(i=0;i<n;i++)
            {

	      cin>>a1[i];
	    }

   temp=0;
        for(i=0;i<n;i++)
  {
            if(temp<a1[i])
	  {
           temp=a1[i];
           j = i;
      }
  }


   temp2=0;
  for(i=0;i<n;i++)
  {
     if(i==j)
        {
          i++;
		  i--;
        }
      else
        {
          if(temp2<a1[i])
	     {
          temp2=a1[i];
             }
        }
  }

  cout<<"The Second largest element in the array is :"<< temp2;
  return 0;
}
