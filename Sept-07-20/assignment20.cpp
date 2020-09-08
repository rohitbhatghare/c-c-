#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int n;
    cout<<"\n Enter the number which want to square ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if((i%2)==0)
        {

        cout<<i<<endl<<i*i;
        }
    }
    return 0;
}
