#include <iostream>
using namespace std; 	//introduces namespace std
int main()
{

    int arr_size;
    int array1[] = {5, 5, 2 };
    arr_size = sizeof(array1)/sizeof(array1[0]);
   cout<<arr_size<<endl;
    int array2[] = {5, 5, 2, 5, 5 };
    arr_size = sizeof(array2)/sizeof(array2[0]);
    cout<<"\n"<<arr_size<<endl;
    int array3[] = {5, 6, 2, 9 };
    arr_size = sizeof(array3)/sizeof(array3[0]);
    cout<<"\n"<<arr_size;
    }

  int test(int nums[], int arr_size)
         {
            int ctr = 0;
            for (int i = 0; i < arr_size - 1; i++)
            {
                if (nums[i] == 5 && (nums[i + 1] == 5 || nums[i + 1] == 6)) ctr++;
            }
            return ctr;
        }
