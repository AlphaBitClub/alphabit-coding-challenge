#include <stdio.h>
#include <stdlib.h>
#define max 100000

int main()
{
    int n, i;
    int surface;
    int taille[max][2];
    //input*************************************

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &taille[i][0], &taille[i][1]);
    }

    // traitment*************************************
    if (taille[0][0] >= taille[0][1])
    {
        int star = taille[0][0] * taille[0][1];
        int parts = 0;
         surface = 0;
        for (i = 1; i < n; i++)
        {
            parts += taille[0][1] * taille[i][0];
            surface += taille[i][0] * taille[i][1];
        }
        printf("%d", surface - parts + star);
    }
    else
    {
        int star = taille[0][0] * taille[0][1];
        int parts = 0;
         surface = 0;
        for (i = 1; i < n; i++)
        {
            parts += taille[0][0] * taille[i][1];
            surface += taille[i][0] * taille[i][1];
        }


        printf("%d", surface - parts + star);
    }

    return 0;
}
