#include<iostream>
using namespace std;
int main()
{
    int i,sum,n,a1[n+1],a2[n+1];

    cout<<"Enter the  number of elements \n";
    cin>>n;
    cout<<"Enter elements";

    for(i=0;i<n;i++)
    {

        cin>>a1[i];

    }
   for(i=0;i<n;i++)
   {
       a2[i]=a1[i];
   }
   cout<<"\n  First array \n";
    for(i=0; i<n; i++)
    {
       cout<<a1[i]<<endl;
           }


   cout<<"\n The elements copied into the second array are :\n";
    for(i=0; i<n; i++)
    {
        cout<<a2[i]<<endl;
    }
	      cout<<"\n\n";


    return 0;
}
