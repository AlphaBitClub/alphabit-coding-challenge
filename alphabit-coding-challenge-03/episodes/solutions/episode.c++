#include<stdio.h>
#include<iostream>
int CompareDates(int D1,int M1,int A1,int D2,int M2,int A2){
	// 0 if Equels , -1 if Day 1 > Day 2 , 1 if Day 2 > Day 1 
	if(A1 > A2 ) return -1;
	else if(A1 == A2 && M1 > M2) return -1;
	else if(A1 == A2 && M1 == M2 && D1 > D2 ) return -1;
	else if (A1 == A2 && M1 == M2 && D1 == D2 ) return 0;
	else return 1;
	
}
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
             y / 400 + t[m - 1] + d) % 7;
}
 
using namespace std;
int main(){
int D1,M1,A1;
cin >> D1;
cin >> M1;
cin >> A1;
int D2,M2,A2;
cin >> D2;
cin >> M2;
cin >> A2;

if(CompareDates(D2,M2,A2,9,9,2009)==0) printf("1");
else if(CompareDates(D2,M2,A2,9,9,2009)==1) printf("0");
else {
	int Ret =0;
	int Today = 0;
	 if(CompareDates(D1,M1,A1,9,9,2009)==1){
        D1=9;
        M1=9;
        A1=2009;
        Ret=0;
    }
			Today = dayofweek(D1,M1,A1);
	while(CompareDates(D1,M1,A1,D2,M2,A2)!= -1){
		if(CompareDates(D1,M1,A1,9,9,2009)==0) Ret++;
		if(M1 == 1 && Today == 5 ) {Ret++; }
		if(M1 == 1 && Today == 3 ) {Ret++; }
		if(M1 == 4 && Today == 0 ) {Ret++; }
		if(M1 == 4 && Today == 1 ) {Ret++; }
		if(M1 == 4 && Today == 4 ) {Ret++;}
		if(M1 == 12 && Today == 5 ) {Ret++; }
		D1++;
		if(D1==32) {
			D1=1;
			M1++;
			if(M1==13){M1=1; A1++;}
		}
		Today++;
				if(Today==7) Today=0;
	}
	printf("%d",Ret);
} 

}