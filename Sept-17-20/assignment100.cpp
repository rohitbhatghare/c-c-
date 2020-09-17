#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void check(int z[],int s)
{
    int i;
    for(i=0;i<s;i++)
    {
        cout<<z[i]<<"  ";

    }
    cout<<z[i]<<" ";

}

int main()
{
      int arr,i;
      int ar[]={13,5,7};
      arr=sizeof(ar)/sizeof(ar[0]);
      cout<<"\n original array";
      check(ar,arr);
      for(i=0; i<=arr; i++)
 {
     if(ar[i]==5 && ar[i+1]==7)
     ar[i+1]=1;
 }

  cout<<"New array \n";
 check(ar,arr);

  return 0;
}
