#include<iostream>
using namespace std;
int main()
{
    char s_ch;

    cout<<"Input a character: \n";
    cin>>s_ch;


    if((s_ch>='a' && s_ch<='z') || (s_ch>='A' && s_ch<='Z'))
    {
        cout<<"This is an alphabet.\n";
    }
    else if(s_ch>='0' && s_ch<='9')
    {
        cout<<"This is a digit.\n";
    }
    else
    {
        cout<<"This is a special character.\n";
    }

    return 0;
}
