#include <iostream>
#include <string.h>
#define max 1000001
using namespace std;

void Soultion(char A[]){
	int Len = strlen(A);
	int Step[] = {0,0};
	for (int i=0;i<Len;i++){
		if(A[i] =='Z') Step[0]+=1;
		else if(A[i] =='S') Step[0]-=1;
		else if(A[i] =='Q') Step[1]+=1;
		else Step[1] -=1;
	}
	if(Step[0] > 0)
	cout << Step[0] << " " << "0 ";
	else cout << "0 " << -Step[0] << " ";
	if(Step[1] > 0)
	cout << Step[1] << " " << "0 ";
	else cout << "0 " << -Step[1] <<" ";
}
int main(){
char N[max];
cin >> N;

Soultion(N);

}