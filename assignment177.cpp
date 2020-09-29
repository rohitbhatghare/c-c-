#include<iostream>
#include <math.h>
using namespace std;


int main()
{
      int arr[10];
    int i;

    cout<<"enter 10 elements in the array :\n";
    for(i=0; i<10; i++)
    {
	   cout<<"element "<<i;
        cin>>arr[i];
    }

    cout<<"\nElements in array are: ";
    for(i=0; i<10; i++)
    {
        cout<<arr[i];
    }
   cout<<"\n";
   return 0;
}
