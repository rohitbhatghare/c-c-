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
     cout<<"Elements in original array: \n ";
    parray(a1, arr);

     int size = arr, index = 0;
            for (int i = 0; i < size; i++)
            {
                if (a1[i] % 2 == 0)
                {
                    int temp = a1[index];
                    a1[index] = a1[i];
                    a1[i] = temp;

                    index++;
                }
            }

    arr= sizeof(a1)/sizeof(a1[0]);
    cout<<"\nElements in new array are: \n";
    parray(a1, arr);


       return 0;
}
