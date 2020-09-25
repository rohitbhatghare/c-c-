#include<iostream>
using namespace std;

int main()
{
    int i,n ,a=0;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"The sum of"<<n<<" numbers are \n";
    for(i=1;i<=n;i++)
    {
        a=a+i;

    }
    cout<<a<<endl;
    cout<<"\n\n\n\n";

    return 0;
}
