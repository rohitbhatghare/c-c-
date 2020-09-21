#include<iostream>
using namespace std;

int opt(int num[],int arr,int length)
{

         {
          for (int i = 0; i < length; i++)
            {
                if (num[i] != num[arr - length + i])
                {
                    return 0;
                }
            }
         }
            return 1;
         }



int main()
{
    int arr,length;
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
