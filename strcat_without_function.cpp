#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char st[80],sp[80],se[80];
    int i,j=0;
    cout<<"\n Enter First String : ";
    cin>>st;
    cout<<"\n Enter Second String : ";
    cin>>sp;
    for(i=0;st[i]!='\0';i++)
    {
        se[j]=st[i];
        j++;
    }
    for(int i=0;sp[i]!='\0';i++)
    {
        se[j]=sp[i];
        j++;
    }
    se[j]='\0';
    cout<<"\n After Concatenation : "<<se<<endl;

    return 0;
}
