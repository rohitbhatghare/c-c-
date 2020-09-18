#include<iostream>
using namespace std;

int opt(int num[],int arr)
{
    int a3 = 0;
         int a5 = 0;
    for(int i=0;i<arr;i++)
    {
        int a3 = 0;
         int a5 = 0;

            for (int i = 0; i < arr; i++)
            {
                if (num[i] == 3)

                  {

                    a3++;
                  }
                if (num[i] == 5)
                {

                 a5++;
                }
            }
    }

           return a3>a5;

    }

int main()
{
    int arr;
    int a1[]={1, 5, 6, 9, 10, 17};
    arr= sizeof(a1)/sizeof(a1[0]);
    cout<<opt(a1,arr);
    int a2[]={1, 1, 5, 5, 5, 5};
    arr= sizeof(a2)/sizeof(a2[0]);
    cout<<opt(a2,arr);
    int a3[]={1, 5, 5, 5, 10, 17};
    arr= sizeof(a3)/sizeof(a3[0]);
    cout<<opt(a3,arr);
    cout<<"\n\n";
    return 0;
}
