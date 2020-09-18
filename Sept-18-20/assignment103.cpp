#include<iostream>
using namespace std;

int opt(int num[],int l)
{
    int add=0;
    for(int i=0;i<l;i++)
    {
       if (num[i] == 5)
       {

                    add=add+ 5;
            }
            return add == 15;

    }
    cout<<endl;
    return 0;
}


int main()
{
    int l;
    int a1[]={1, 5, 6, 9, 10, 17};
    l= sizeof(a1)/sizeof(a1[0]);
    cout<<opt(a1,l);
    int a2[]={1, 5, 5, 9, 10, 17};
    l= sizeof(a2)/sizeof(a2[0]);
    cout<<opt(a2,l);
    int a3[]={1, 5, 5, 9, 10, 17, 5, 5};
    l= sizeof(a3)/sizeof(a3[0]);
    cout<<opt(a3,l);
    cout<<"\n\n";
    return 0;
}
