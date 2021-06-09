#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 100000

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int n, b, t, count ;
    int tab[max];
    //input*************************************

   scanf("%d %d", &n, &b);
	for (int i = 0; i < n; i++) {
		scanf("%d", &tab[i]);
	}



    // traitment*************************************
qsort(tab,n,sizeof(int),cmpfunc);

    count = 0;
	for (int i = 0; i < n; i++) {
		if (b >= tab[i]) {
			b -= tab[i];
			count++;
		}
	}

    //output*************************************

 printf("%d", count);



    return 0;
}