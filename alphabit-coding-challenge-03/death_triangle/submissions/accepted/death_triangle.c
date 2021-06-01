#include <stdio.h>
#include <stdlib.h>
#include <math.h>



float dest (int a,int b ,int c ,int d ){
    return sqrtf( ((a-c)*(a-c))+((b-d)*(b-d)) );
}

int main()
{
   int fx, sx, tx, fy, sy, ty;
    //input*************************************

    scanf("%d %d", &fx, &fy);
    scanf("%d %d", &sx, &sy);
	scanf("%d %d", &tx, &ty);



    // traitment*************************************
int ab,ac,bc;
   ab = dest(fx, fy, sx, sy);

	ac = dest(fx, fy, tx, ty);

	bc = dest(sx, sy, tx, ty);



    //output*************************************

   if (((bc*bc == (ab*ab+ac*ac)) || (ab*ab ==( ac*ac+bc*bc))) || (ac*ac == (ab*ab+bc*bc))) {
		printf("True");
	} else {
		printf("False");
	}



    return 0;
}
