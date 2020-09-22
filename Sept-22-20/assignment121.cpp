#include<iostream>
using namespace std;

int opt(int num[],int arr)
{
    int i;
    {
           for (i = 0; i < arr-1; i++)
            {
                if (num[i + 1] == num[i] && num[i] == 15)
                {
                    return 1;
                }

            }
            return 0;
        }
}

int main()
{
    int arr;
    int a1[]={1, 15, 6, 9, 10, 17};
    arr= sizeof(a1)/sizeof(a1[0]);
    cout<<opt(a1,arr);
    int a2[]={1, 1, 15, 15, 5, 5};
    arr= sizeof(a2)/sizeof(a2[0]);
    cout<<opt(a2,arr);
    int a3[]={1, 15, 15, 5, 10, 17};
    arr= sizeof(a3)/sizeof(a3[0]);
    cout<<opt(a3,arr);
    cout<<"\n\n";
    return 0;
}
