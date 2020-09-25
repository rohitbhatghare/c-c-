#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int sum=1,avg;
    cout<<"Enter the Number ";
    cin>>j;
     for(i=1;i<=j;i++)
    {
            sum=sum*i;

    }
    cout<<"Odd natural numbers and their sums are"<<j<<"  "<<sum<<endl;
    return 0;
}

