#include<iostream>
using namespace std;
int main()
{
    char s_ch;

    cout<<"Input a character: \n";
    cin>>s_ch;



    if(s_ch=='a' || s_ch=='e' ||s_ch=='i' ||s_ch=='o' ||s_ch=='u'||s_ch=='A' || s_ch=='E' ||s_ch=='I' ||s_ch=='O' ||s_ch=='U' )
    {
        cout<<"This is vowel.\n";
    }
    else
    {
        cout<<"This is a Consonent\n";
    }

    return 0;
}
