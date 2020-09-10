#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,num,c;
    cout<<"The prime Numbers 1 -200 are";
    for(num=1;num<=200;num++)
    {
        c=0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                c++;
                break;
            }
        }
        if(c==0 && num!=1)
        {
            cout<<"\t"<<num<<"\t";
        }
    }
    return 0;
    }
