#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double n,k;
    int val;
    //input*************************************

    scanf("%ld %ld",&n,&k);


    // traitment*************************************
   val = (int)sqrt((n/k));
    // output*************************************

    if ((int)val == sqrt((n/k)) )
    {
        printf("true");
    }else
    {
        printf("false");
    }






    return 0;
}