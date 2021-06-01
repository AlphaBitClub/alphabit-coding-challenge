#include<stdio.h>
#include <math.h>

int main() {
  double x,y;

    // read the input
    scanf("%lf %lf",&x,&y);
   
    double n = log(y)/log(x);
    int rounded_up = ceilf(n) ;
    printf("%d",rounded_up);
}