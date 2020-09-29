#include<iostream>
using namespace std;
int main()
{
    int i,n,sum;
    cout<<"Numbers between 100 and 200 which divisible by 9 :\n";
    for(i=100;i<200;i++)
    {
        if(i%9==0)
        {
            cout<<i;
            sum=sum+i;
        }

          }
            cout<<sum<<" ";
    return 0;
}
