#include <stdio.h>
#include <stdlib.h>


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{

    int n,x,y,tmp;
    int xVct[101],yVct[101];
    int output [6] = {0,0,0,0,0,0};
    div_t d;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d %d",&x,&y);
        xVct[i]= x;
        yVct[i]= y;
        };

    qsort(xVct, n, sizeof(int), cmpfunc);
    qsort(yVct, n, sizeof(int), cmpfunc);
    for(int i = 0 ; i < n-1; i++ ) {
            for(int j = 0 ; j < n-1; j++ ) {
        tmp = (xVct[i+1]-xVct[i]-1)*(yVct[j+1]-yVct[j]-1);
        if (((tmp % 16)== 0)&((xVct[i+1]-xVct[i]-1) == (yVct[j+1]-yVct[j]-1))){
                d=div(tmp,16);
                output [3]+= d.quot;
        }else if (((tmp % 16)== 0)&((xVct[i+1]-xVct[i]-1) != (yVct[j+1]-yVct[j]-1))){
                d=div(tmp,16);
                output [4]+= d.quot;
        }else if ((tmp % 12)== 0){
                d=div(tmp,12);
                output [2]+= d.quot;
        }else if ((tmp % 9)== 0){
                d=div(tmp,9);
                output [1]+= d.quot;
        }else if ((tmp % 4)== 0){
                d=div(tmp,4);
                output [0]+= d.quot;
        }else{
                output [5]++;
        };
    };};






for(int i =0;i<6;i++){
    printf("\n%d",output[i]);
}

    return 0;
}


