#include<iostream>
#include <math.h>
using namespace std;
int main() {
  double x,y;

    // read the input
    cin >> x;
    cin >> y;
   
    double n = log(y)/log(x);
    int rounded_up = ceilf(n) ;
    cout << rounded_up;
    
}