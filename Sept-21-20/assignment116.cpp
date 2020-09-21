#include<iostream>
using namespace std;
using namespace std;

int parray(int paray[], int size)
  {
   int i;
   for( i=0; i<size-1; i++)
    {
        cout<<paray[i];
    }
   cout<<paray[i];

    return 0;
  }
int main()
{
    int arr;
    int a1[]={1, 5, 6, 9, 10, 17};
    arr= sizeof(a1)/sizeof(a1[0]);
      int size = 0;
    int len = arr;
    int i = len - 1;
    while (i >= 0 && a1[i] != 5) i--;
    i++;
    size = len - i;
    int post5[size];
     for (int j = 0; j < size; j++)
      {
          post5[j] = a1[i + j];
      }
    arr = sizeof(post5)/sizeof(post5[0]);
     parray(post5, arr);

    return 0;
}
