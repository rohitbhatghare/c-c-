#include<iostream>
using namespace std;
class cube
{
public:
    int side;

    int getvol()
    {
        return side*side*side;
    }

};
int main()
{
    cube ob1;
    ob1.side=4;
    cout<<"The volume of cube is"<<ob1.getvol();

    return 0;
}
