#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char i;
    for(int i=65;i<=122;i++)
    {
        if(i<=90 || i>=97)
            cout<<(char) i<<"\t :";
         cout<<i<<"\n \n";

    }
    cout<<"\n";
    return 0;
}
