#include<iostream>
using namespace std;
int main()
{
   int a1[100];
    int i, mx, mn, n;
	cout<<"Enter the number of elements \n";
    cin>>n;
    cout<<"Enter elements of array \n";

    for(i=0;i<n;i++)
    {

        cin>>a1[i];

    }
            {
	      cout<<"element : "<<i;
	      cin>>a1[i];
	    }


    mx = a1[0];
    mn = a1[0];

    for(i=1; i<n; i++)
    {
        if(a1[i]>mx)
        {
            mx = a1[i];
        }


        if(a1[i]<mn)
        {
            mn = a1[i];
        }
    }
   cout<<"Maximum element is : "<< mx<<endl;
    cout<<"Minimum element is : "<<mn;
}
