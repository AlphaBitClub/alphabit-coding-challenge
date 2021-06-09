#include <iostream>
using namespace std;
int main(){
	
  int N;
  cin >> N;
  int Ret = 2;
  while(1){
	if(N==3) break;  
    Ret*=2;
    N/=Ret%10;
  }
  cout << Ret;
  return 0;

}
