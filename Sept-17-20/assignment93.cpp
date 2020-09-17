#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int i;
    int arr[]={1,2,3,4,5};
    int length= sizeof(arr)/sizeof(arr[0]);
    int n=3;

    cout<<"Original array :\n";
    for(i=0;i<=length;i++)
    {
        cout<<arr[i];
    }
    for(i=0;i<=n;i++)
    {
        int j,first;
        first=arr[0];

        for(j=0;j<=length-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=first;
    }
    cout<<"\n\n";

    cout<<"Array after rotation"<<endl;
    for(int i=0;i<=length;i++)
    {
        cout<<arr[i];
    }



return 0;
}
