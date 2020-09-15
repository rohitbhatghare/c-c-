#include <iostream>
using namespace std; 	//introduces namespace std
int main()
{
    int ar_size;
    int ar1[]={1,1,2,3,1};
    ar_size=sizeof(ar1)/sizeof(ar1[0]);

    cout<<"\t"<<ar1[0]<<endl;
    int ar2[]={1,1,2,4,1};
    ar_size=sizeof(ar2)/sizeof(ar2[0]);

    cout<<"\t"<<ar2[0]<<endl;

   int ar3[]={1,1,2,4,1};
    ar_size=sizeof(ar3)/sizeof(ar3[0]);

    cout<<"\t"<<ar3[0]<<endl;
}

int test(int nums[], int arr_size)
         {
            for (int i = 0; i < arr_size-1; i++)
            {
                if (nums[i] == 1 && nums[i + 1] == 2 && nums[i + 2] == 3)
                    return 1;
            }
           return 0;
        }

