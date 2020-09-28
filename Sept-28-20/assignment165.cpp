#include<iostream>
using namespace std;
int main()
{
    int n,i,temp;
    int mn,mx,sum=0;

    cout<<"Enter the starting and ending range or number : \n";
    cin>>mn>>mx;

    cout<<"Armstrong numbers are:\n";
    for(n=mn;n<=mx;n++)
    {
        temp=n;
        sum=0;
        while(temp!=0)
        {
            i=temp%10;
            temp=temp%10;
            sum=sum+(i*i*i);

                 }
                 if(sum==n)
                    cout<<" "<<sum;

    }
    cout<<"\n\n\n\n";
    return 0;
}
