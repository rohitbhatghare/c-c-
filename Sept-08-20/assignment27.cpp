#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int a,i,j=1,n=0;
    cout<<"Enter the numbers of lines"<<endl;
    cin>>a;
    for(i=0;i<=a;i++)
    {
        while(n<3)
        {
            cout<<j++;
            n++;
        }
        n=0;
        cout<<"\n";
    }
   return 0;
}
