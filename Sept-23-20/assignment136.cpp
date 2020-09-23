  #include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int tmp;

    cout<<"Input days temperature : \n";
    cin>>tmp;
   if(tmp<0)
   {
   cout<<"Freezing weather.\n";
   }
   else if(tmp<10)
   {
       cout<<"Very cold weather.\n";
   }

            else if(tmp<20)
                    {
                        cout<<"Cold weather.\n";
                    }
                    else if(tmp<30)
                        {
                            cout<<"Normal in temp.\n";
                        }
                            else if(tmp<40)
                                {
                                cout<<"Its Hot.\n";
                                }
                                    else
                                        {
                                           cout<<"Its very hot.\n";
                                        }

                                        return 0;

}
