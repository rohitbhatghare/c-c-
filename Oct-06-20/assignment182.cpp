#include<iostream>
using namespace std;
int main()
{
    int i,j,sum,n,a1[n+1],a2[n+1],a3[n+1],mm=0,ctr=0;

    cout<<"Enter the  number of elements \n";
    cin>>n;
    cout<<"Enter elements";

    for(i=0;i<n;i++)
    {

        cin>>a1[i];

    }

    for(i=0;i<n; i++)
        {
		a2[i]=a1[i];
		a3[i]=0;
        }
        for(i=0;i<n; i++)
        {
		for(j=0;j<n;j++)
			{
				if(a1[i]==a2[j])
				{
				a3[j]=mm;
				mm++;
				}
			}
			mm=1;
        }
        for(i=0; i<n; i++)
    {
      if(a3[i]==2)
        {
            ctr++;
      }
      cout<<"Duplicate Elements are :"<<ctr<<endl;

    }
    return 0;
}
