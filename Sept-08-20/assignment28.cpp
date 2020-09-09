#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int i,num;
    cout<<"Enter the numbers of lines"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {

    cout<<"\n \t"<<i<<"\t"<<i*i<<"\t"<<i*i*i;
     }
     return 0;
}
