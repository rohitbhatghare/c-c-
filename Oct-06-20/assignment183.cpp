#include<iostream>
using namespace std;
int main()
{
    int i,j,n1,n2,n3,a1[100],a2[100],a3[100],mm=0,ctr=0;

    cout<<"Enter the 1st number of elements \n";
    cin>>n1;
    cout<<"Enter elements of 1st array \n";

    for(i=0;i<n1;i++)
    {

        cin>>a1[i];

    }

    cout<<"Enter the 2nd number of elements \n";
    cin>>n2;
    cout<<"Enter elements of 2nd array \n";

    for(i=0;i<n2;i++)
    {

        cin>>a2[i];

    }
    n3=n1+n1;
    for(i=0;i<n1; i++)
        {
            a3[i] = a1[i];
         }
     for(j=0;j<n2; j++)
        {
            a3[i] = a2[j];
            i++;
        }
        for(i=0;i<n3; i++)
        {
           for(int k=0;k<n3-1;k++)
            {

            if(a3[k]<=a3[k+1])
                {
                j=a3[k+1];
                a3[k+1]=a3[k];
                   a3[k]=j;
                 }
              }
         }

cout<<"\nThe merged array in decending order is :\n";
    for(i=0; i<n3; i++)
    {
        cout<<a3[i]<<endl;
    }
	cout<<"\n\n";

	return 0;
}
