#include <iostream>
#include <math.h>
int Solution(int A){

return (1+sqrt(1+8*A))/2;

}
using namespace std;
int main(){
int N;
cin >> N;
cout << Solution(N);


}
