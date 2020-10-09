 #include <iostream>
using namespace std;

int main()
{
  int a1[50],n,i,j=0,temp,temp1;

       cout<<"Enter the size of array : \n";
       cin>>n;
    cout<<"Enter elements in the array :\n";
       for(i=0;i<n;i++)
            {

	      cin>>a1[i];

  }

   temp=a1[0];
  for(i=0;i<n;i++)
  {
      if(temp>a1[i])
	  {
           temp=a1[i];
           j = i;
      }
  }


   temp1=99999;
  for(i=0;i<n;i++)
  {
     if(i==j)
        {
          i++;
		  i--;
        }
      else
        {
          if(temp1>a1[i])
	     {
               temp1=a1[i];
             }
        }
  }

 cout<<"The Second smallest element in the array is :  "<<temp1;
}
