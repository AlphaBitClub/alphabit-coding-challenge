#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

#define max 100000
using namespace std;



float dest (int a,int b ,int c ,int d ){
    return sqrtf( ((a-c)*(a-c))+((b-d)*(b-d)) );
}

int main()
{
   int fx, sx, tx, fy, sy, ty;
    //input*************************************

    cin >>  fx >> fy ;
    cin >> sx >> sy ;
	 cin >> tx >> ty;



    // traitment*************************************
int ab,ac,bc;
   ab = dest(fx, fy, sx, sy);

	ac = dest(fx, fy, tx, ty);

	bc = dest(sx, sy, tx, ty);



    //output*************************************

   if (((bc*bc == (ab*ab+ac*ac)) || (ab*ab ==( ac*ac+bc*bc))) || (ac*ac == (ab*ab+bc*bc))) {
		cout <<  "True";
	} else {
		cout << "False";
	}



    return 0;
}
