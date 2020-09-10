#include<iostream>
#include<conio.h>
int natnum(int n);
using namespace std;
int main()
{
    int n=1;
    cout<<"from N- 50 Naturals Numbers \n";
    cin>>n;
    natnum(n);
    return 0;

}

int natnum(int n)
{

    if(n<=50)
    {
        cout<<n<<"\n";
        natnum(n+1);
    }
}
