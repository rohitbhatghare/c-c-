#include<iostream>
using namespace std;

int opt(int num[],int arr)
{
            int flag = 0;
          int five = 0;

            for (int i = 0; i < arr; i++)
            {
                if (num[i] == 5 && !flag)
                {
                    five++;
                    flag = 1;
                }
                else
                {
                    flag = 0;
                }
            }

            return five == 5;
                  return 0;
         }


int main()
{
    int arr;
    int a1[]={1, 5, 6, 9, 10, 17};
    arr= sizeof(a1)/sizeof(a1[0]);
    cout<<opt(a1,arr);
    int a2[]={1, 5, 5, 5, 5};
    arr= sizeof(a2)/sizeof(a2[0]);
    cout<<opt(a2,arr);
    int a3[]={1, 5, 5, 5, 10, 17};
    arr= sizeof(a3)/sizeof(a3[0]);
    cout<<opt(a3,arr);
    cout<<"\n\n";
    return 0;
}
