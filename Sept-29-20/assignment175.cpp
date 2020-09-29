#include<iostream>
using namespace std;
int main()
{
    int dn,j,i,q,n,s=0;
    int fact,mx,mn;
    cout<<"Enter the maximum range\n";
    cin>>mx;
    cout<<"Enter the minimum range\n";
    cin>>mn;


	for (i=mx;i>mn;i++)
	{
         n=i;
         q=0;
          for(j=i;j>0;j=j/10)
    {

        fact = 1;
          for(j=1; j<=j % 10; j++)
           {
            fact = fact * j;
           }
            q = q + fact;
    }

    if(q==n)
	{
    cout<<n;
	}
	}



	return 0;
}
