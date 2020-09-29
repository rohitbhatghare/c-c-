#include<iostream>
using namespace std;
int main()
{
    int dn,j,i,n,s=0;
    int fact;
    cout<<"Enter the number\n";
    cin>>n;

	for (i=n;i>0;i=i/10)
	{
          fact = 1;
        for(j=1; j<=i % 10; j++)
        {
            fact = fact * j;
        }
         s = s + fact;
	}
	if(n==s)
    {
        cout<<"strong number \n";
    }
    else
    {
        cout<<"Not Strong number";
    }


	return 0;
}
