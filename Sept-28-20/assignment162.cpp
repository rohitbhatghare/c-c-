#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int mn,mx,sum=0;

    cout<<"Enter the positive number";
    cin>>n;
    for(i=0;i<n;i++)
    {
       if(n%1==0)
       {
           sum=sum+i;
           cout<<" "<<i;
       }
    }

    cout<<"The sum divisor is :"<<sum;
    if(sum==n)
    {
        cout<<"perfect number\n";
    }
    else
    {
        cout<<"Not a Perfect number";
    }
return 0;
}
