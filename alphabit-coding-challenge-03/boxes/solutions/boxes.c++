#include <iostream>
#include <bits/stdc++.h>

#define maxx 100000
using namespace std;

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

    cin >> qg;
    qs=qg-1;

    for (int i = 0; i < qg ; i++)
    {
        cin >> guns[i] ;
    }

    for (int i = 0; i < qs - 1; i++)
    {
         cin >> boxes[i];
    }
     cin >> boxes[qs - 1];

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
     cout << result[i] << " ";
    }

    return 0;
}