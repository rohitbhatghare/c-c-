#include<iostream>
using namespace std;
int main()
{
   int a1[100];
    int i=0,j=0,n,temp;
	cout<<"Enter the number of elements \n";
    cin>>n;
    cout<<"Enter elements of array \n";

    for(i=0;i<n;i++)
    {

        cin>>a1[i];

    }
    for(i=0; i<n; i++)
    {

        for(j=i+1; j<n; j++)

        {
        if(a1[j] <a1[i])
         {
            temp = a1[i];
                a1[i] = a1[j];
                a1[j] = temp;
            }
        }
    }
    cout<<"\nElements of array in sorted ascending order:\n";
    for(i=0; i<n; i++)
    {
       cout<<a1[i];
    }
	        cout<<"\n\n";

	        return 0;
}
