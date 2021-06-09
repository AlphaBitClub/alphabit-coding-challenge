#include <math.h>
#include <iostream>

using namespace std;
int main()
{

    double n ,k ;
    int val;
    //input*************************************

    cin >> n >> k;


    // traitment*************************************
   val = (int)sqrt((n/k));
    // output*************************************

    if ((int)val == sqrt((n/k)) )
    {
        cout << ("true");
    }else
    {
        cout << ("false");
    }






    return 0;
}