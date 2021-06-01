#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

#define max 100000
using namespace std;

int main()
{
    int n, b,  count,i ;
    int tab[max];
    //input*************************************

 cin >>  n >> b;
	for (i = 0; i < n; i++) {
	cin >> tab[i];
	}



    // traitment*************************************
		sort(tab,tab+n);//,sizeof(int),cmpfunc);

    count = 0;
	for (i = 0; i < n; i++) {
		if (b >= tab[i]) {
			b -= tab[i];
			count++;
		}
	}

    //output*************************************

 cout <<  count;



    return 0;
}