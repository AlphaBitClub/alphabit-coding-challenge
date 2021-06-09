#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100000



int main()
{
        //input*************************************

   	char m[max] ;
	int res [max];
	//char l = "l";
	fgets(m,100000,stdin);
        // traitment*************************************


	int l = strlen(m);
    int j =0;
	for (int i = 0; i < l; i++) {
		if (m[i]=='l') {
            res[j] = i;
            j++;
		}
	}

    int err = res[0];
	for (int i = 1; i < j+1; i++) {
		err ^= res[i];
	}

    //output*************************************

    printf("%d", err);



    return 0;
}