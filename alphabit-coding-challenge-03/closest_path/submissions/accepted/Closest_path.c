#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 1000001

int main()
{
    //input
    char strin[max];
    int steps[2];
    steps[0]=0;
    steps[1]=0;

    fgets(strin, sizeof(strin), stdin);

    //traitement


    for(int i =0;i<strlen(strin);i++){
        switch (strin[i])
        {
        case 'Z':
            steps[0] +=1;
            break;
        case 'S':
            steps[0] -=1;
            break;
         case 'Q':
            steps[1] +=1;
            break;
        case 'D':
            steps[1] -=1;
            break;
        default:
            break;
        }
    }

    if ((steps[0] >= 0)&&(steps[1] >= 0)){
        printf ("%d %d %d %d",steps[0],0,steps[1],0);
    }
    else if ((steps[0] < 0)&&(steps[1] >= 0)){
        printf ("%d %d %d %d",0,(-1 * steps[0]),steps[1],0);
    }
    else if ((steps[0] >= 0)&&(steps[1] < 0)){
        printf ("%d %d %d %d",steps[0],0,0,(-1 * steps[1]));
    }else{
        printf ("%d %d %d %d",0, - steps[0],0,-steps[0]);
    };


    return 0;
}