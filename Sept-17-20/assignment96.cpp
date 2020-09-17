#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int arr[] = { 4, 5, 7, 13, 25, 65, 98 };
    int f, l, n;
    n = sizeof(arr) / sizeof(arr[0]);
    f = arr[0];
    l = arr[n - 1];
    cout << "First element: " << f << endl;
    cout << "Last element: " << l << endl;
    return 0;
}
