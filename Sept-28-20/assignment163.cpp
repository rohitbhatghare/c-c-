#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int mn,mx,sum=0;

    cout<<"Enter the starting and ending range or number : \n";
    cin>>mn>>mx;
    cout<<"The Perfect numbers within the given range : \n";
  for(n=mn;n<=mx;n++)
    {
        i=1;
            sum = 0;
    while(i<n)
    {
      if(n%i==0)
        sum=sum+i;
          i++;
    }
    if(sum==n)
      cout<<n;
  }
      cout<<"\n\n\n";
  return 0;
}
