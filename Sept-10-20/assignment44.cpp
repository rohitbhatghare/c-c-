#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i;
    float a[5],dif,min,max;
    cout<<"Enter the 4 Numbers :\n";
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<4;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        }

        else
        {
            min=a[i];
        }
    }
    dif=max-min;
    cout<<"The difference between four Numbers are \n"<<dif;
    return 0;
}
