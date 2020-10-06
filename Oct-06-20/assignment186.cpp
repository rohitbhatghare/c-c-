#include<iostream>
using namespace std;
int main()
{
   int a1[100],a2[100],a3[100];
    int i=0,j=0,k,n;
	cout<<"Enter the number of elements \n";
    cin>>n;
    cout<<"Enter elements of array \n";

    for(i=0;i<n;i++)
    {

        cin>>a1[i];

    }
    for(i=0;i<n;i++)
    {
	if (a1[i]%2 == 0)
	{
	   a2[j] = a1[i];
	   j++;
	}
	else
	{
	   a3[k] = a1[i];
	   k++;
	}
    }
     cout<<"\nThe Even elements are : \t \n";
    for(i=0;i<j;i++)
    {
	cout<<a2[i];
    }

   cout<<"\nThe Odd elements are :\t \n";
    for(i=0;i<k;i++)
    {
	cout<<a3[i];
    }
    cout<<"\n\n";
 }
