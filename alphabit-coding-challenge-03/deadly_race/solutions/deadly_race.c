#include <stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  int Ret = 2;
  while(1){
    if(N==3) break;  
    Ret*=2;
    N/=Ret%10;
  }
  printf("%d",Ret);
return 0;
}