#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

#define max 100000
using namespace std;

int main()
{
    int n, i;
    int surface;
    int taille[max][2];
    //input*************************************

   cin >> n;
    for (i = 0; i < n; i++)
    {
       cin >> taille[i][0] >>  taille[i][1];
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
        cout <<  surface - parts + star;
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


        cout << surface - parts + star;
    }

    return 0;
}
