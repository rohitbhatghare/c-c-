#include<iostream>
using namespace std;

int main()
{
    int i,n,b ,a=0;
    float sum,avg;
    cout<<"Enter the size of array";
    cin>>n;
     for(i=0;i<=n;i++)
    {
       cin>>i;
        sum=sum+i;
    }
    avg=sum/n;
    cout<<"avg is"<<avg;

    return 0;
}
