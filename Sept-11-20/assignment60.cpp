#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"\n Enter The Number : ";
    cin>>a;
    for(i=1;i<=20;i++)
    {
        cout<<"\t "<<a<<" * "<<a<<" = "<<i*a<<endl;
    }
    cout<<"\n\n";
    return 0;
}
