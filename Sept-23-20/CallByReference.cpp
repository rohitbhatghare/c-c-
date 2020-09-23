#include<iostream>
using namespace std;

void swap(int i,int j)
{

    int temp=i;
     i=j;
     j=temp;
     cout<<"value of a"<<i<<"Value of b"<<j;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a";
    cin>>a;
    cout<<"Enter the value of b";
    cin>>b;


    swap(a,b);
   // cout<<"The value of A is"<<a<<"The Value of B is"<<b<<endl;
    return 0;
}
