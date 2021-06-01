#include <stdio.h>
#include <stdlib.h>
#define max 100000

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{

    int l, k, arrin[max], arrout[max];

    //input*************************************

    scanf("%d", &l);
    scanf("%d", &k);
    int tmp[k];
    for (int i = 0; i < l - 1; i++)
    {
        scanf("%d ", &arrin[i]);
    }
    scanf("%d", &arrin[l - 1]);

    // traitment*************************************

    int j = 0;
    while (j < l)
    {
        for (int i = 0; i < k; i++)
        {
            tmp[i] = arrin[j + i];
        }
        qsort(tmp, k, sizeof(int), cmpfunc);
        for (int i = 0; i < k; i++)
        {
            arrout[j + i] = tmp[i];
        }
        j += k;
    }

    //output*************************************

    for (int i = 0; i < l; i++)
    {
        printf("%d ", arrout[i]);
    }

    return 0;
}
