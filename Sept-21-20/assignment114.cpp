#include<iostream>
using namespace std;

int opt(int nw[],int size)
{
    int i;
   for( i=0; i<size-1; i++)
    {
        cout<<nw[i];
    }
  cout<<nw[i];

  return 0;
  }

int main()
{
    int arr, res;
    int a1[]={1,2,3,4,10, 17};
    arr= sizeof(a1)/sizeof(a1[0]);
    cout<<opt(a1,arr);
   cout<<"orginal array elements are \n";
     for(int i=0;i<=arr;i++)
     {
        res[i]=a1[(i+1)%arr];
     }
     cout<<"Elements in new array \n";
     int nw;
     cout<<opt(res<<arr);
    cout<<"\n\n";
    return 0;
}
