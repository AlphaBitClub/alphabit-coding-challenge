#include <stdio.h>
#include <stdlib.h>
#define maxx 100000

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int result[maxx];
    int qg, qs,  guns[maxx];
    char boxes[maxx];
    //input*************************************

    scanf("%d", &qg);
    qs=qg-1;

    for (int i = 0; i < qg ; i++)
    {
        scanf("%d ", &guns[i]);
    }

    for (int i = 0; i < qs - 1; i++)
    {
        scanf("%c ", &boxes[i]);
    }
    scanf("%c", &boxes[qs - 1]);

    // traitment*************************************

    int min = 0 ,max = qg-1;

    qsort(guns, qg, sizeof(int), cmpfunc);

        for (int i = 0; i < qs; i++)
        {
            if (boxes[i]=='>'){
                result[i] = guns[max];
                max--;
            }else if (boxes[i]=='<'){
                result[i] = guns[min];
                min++;
            }
        }
       result[qs]= guns[min];



    //output*************************************

    for (int i = 0; i < qg; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}
