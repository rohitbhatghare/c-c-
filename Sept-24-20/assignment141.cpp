#include<iostream>
using namespace std;

int main()
{
    int cp,sp,tot;

    cout<<"Enter the cost price of product \n";
    cin>>cp;

    cout<<"Enter the selling price of product";
    cin>>sp;

    if(sp>cp)
    {
        cout<<"Profitable asset \n";
    }
    else if(sp<cp)
    {
        cout<<"Non-profitable asset\n";
    }
    else
        cout<<"No- Profit Nor -Loss Aseet\n";

    return 0;
}
