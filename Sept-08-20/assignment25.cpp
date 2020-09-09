#include<iostream>
#include<conio.h>
using namespace std;


void sum(int a,int b,int c,int temp,int i)
{


    int sum=0 ;

        for(i=a;i<=b;i++)
    {
        if(i%17!=0)
        {
            sum=sum+i;
        }
    }

       cout<<"The SUM IS"<<endl;
        cout<<sum;

    }


int main()
    {
        float a,b,c,i,temp;
    cout<<"\n Enter first number "<<endl;
    cout<<"a="<<endl;
    cin>>a;
    cout<<endl;
   cout<< "b="<<endl;
    cin>>b;
    cout<<"\n Enter second numbers"<<endl;
        sum(a,b,c,i,temp);
    return 0;
    }
