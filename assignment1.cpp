#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float w1,w2;
    int i1,i2;
    double res;
    cout<<"Number of first purchased item"<<endl;
    cin>>i1;
    cout<<"\n Enter the weights if First items: ";
    cin>>w1;
    cout<<"Number of second purchased item"<<endl;
    cin>>i2;
    cout<<"\n Enter the weights if second items: ";
    cin>>w2;
    res=(i1*w1)+(i2*w2)/(i1+i2);
    cout<<endl<<"the average of total weights and items are  :"<<res;

    return 0;
}
