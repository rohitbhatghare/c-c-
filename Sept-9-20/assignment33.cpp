#include<iostream>
#include<conio.h>
using namespace std;
int div (int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        if((a%i)==0)
        {
            cout<<"\t\t"<<i;
        }
    }
    return i;
}
int main()
{
    int a;
    cout<<"\n Enter The Number : "<<endl;
    cin>>a;
    cout<<"\n The divisor of numbers :\n"<<endl;

    int z=div(a);
    cout<<"\n\n";
    return 0;
}
