#include <iostream>
using namespace std; 	//introduces namespace std
int main()
{
    int arr_size;
    int array1[] = {1, 1, 2, 2, 1};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    cout<<arr_size<<endl;;
    int array2[] = {1, 1, 2, 1, 2, 3};
    arr_size = sizeof(array2)/sizeof(array2[0]);
    cout<< arr_size<<endl;
    int array3[] = {1, 1, 1, 2, 2, 2, 1 };
    arr_size = sizeof(array3)/sizeof(array3[0]);
    cout<<arr_size;
    }
    int test(int nums[], int arr_size)
         {
             for (int i = 0; i < arr_size - 1; i++)
            {
                 if(nums[i] == nums[i + 1] && nums[i + 2] == nums[i])
                     return 1;
            }
           return 0;

        }
