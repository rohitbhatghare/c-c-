#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int temp,sum=0;

    cout<<"Enter the Number \n";
    cin>>n;

    for(temp=n;n!=0;n=n/10)
    {
       j=n%10;
       sum=sum+(j*j*j);

    }
    if(sum==temp)
    cout<<"is armstrtong number\n\n\n";
    else
        cout<<"is not armstrong number \n\n\n";
  return 0;
}
