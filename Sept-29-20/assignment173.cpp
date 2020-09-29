#include<iostream>
using namespace std;
int main()
{
    int dn,j,i,n,sum,bi=0,p=1,dec;
    cout<<"Enter the number\n";
    cin>>n;
    cout<<"Numbers binary to decimal are :\n";

    dn=n;
	for (i=n;i>0;i=i/10)
	{
          dn = i % 10;
            if(j==1)
                  p=p*1;
            else
                 p=p*2;

	   dec=dec+(dn*p);
	   j++;
	}
	cout<<n<<dec;

	return 0;
}
