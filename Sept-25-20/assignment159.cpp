#include<iostream>
using namespace std;

int main()
{
    int i,j;
    float sum,avg;
    cout<<"Enter the Number for table";
    cin>>j;
     for(i=0;i<=10;i++)
    {
       cout<<2*i;
       sum=sum+2*i;

    }
    cout<<"The odd naturals numbers are "<<j<<" "<<sum;
    return 0;
}

