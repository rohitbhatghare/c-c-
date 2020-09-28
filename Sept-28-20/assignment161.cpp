#include<iostream>
using namespace std;
int main()
{
    int n,i;

    double sum=0, j=1;

    cout<<"Enter the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<j;
        if(i<n)
        {
        cout<<" + ";
        }
        sum=sum+j;
   j=(j*10)+1;
    }
    cout<<"The sum is :"<<sum;
return 0;
}
