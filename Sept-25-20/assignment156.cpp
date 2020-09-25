#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    float sum,avg;
    cout<<"Enter the Number for table starting from 1 :";
    cin>>n;

     for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-1)
            {
                cout<<i<<" x "<<j<<" = "<<i*j;
            }
            else
            {
                cout<<i<<" x "<<j<<" = "<<i*j;
            }
        }
       cout<<"\t";

    }


    return 0;
}

