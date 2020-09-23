#include<iostream>
using namespace std;
int main()
{
    char s_ch;

    cout<<"Input a character: \n";
    cin>>s_ch;


    if((s_ch>='a' && s_ch<='z') || (s_ch>='A' && s_ch<='Z'))
    {
        cout<<"This is an Consonent.\n";
    }
    else if(s_ch=='a' || s_ch=='e' ||s_ch=='i' ||s_ch=='o' ||s_ch=='u' )
    {
        cout<<"This is vowel.\n";
    }
    else
    {
        cout<<"This is a special character.\n";
    }

    return 0;
}
