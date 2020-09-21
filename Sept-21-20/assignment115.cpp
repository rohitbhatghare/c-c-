#include <iostream>
using namespace std;

int main()
{   int arr;
    int a1[] = {1, 2, 3, 5, 7};
    arr= sizeof(a1)/sizeof(a1[0]);
    cout<<"Elements in original array are: \n";
    cout<<(a1, arr);
    int size = 0;
    int pre5[arr];
     for (int i = 0; i < arr; i++)
        {
           if (a1[i] == 5)
              {
                size = i;
                break;
                }
            }
          return 0;
}

       int res[size];

            for (int j = 0; j < size; j++)
            {
                res[j] = a1[j];
            }
    arr= sizeof(res)/sizeof(res[0]);
    cout<<"\nElements in new array are: ";
    int  resa(res, arr);
    }
  resa(int resa[], int size)
  {
   int i;
   for( i=0; i<size-1; i++)
    {
        cout<<resa[i];
    }
   cout<<resa[i];
    cout<<"\n\n";
  }
