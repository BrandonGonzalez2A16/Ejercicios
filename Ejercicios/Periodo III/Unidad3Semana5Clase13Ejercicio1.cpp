#include <iostream>
using namespace std;

int main(){
  int n = 1234;
  int reverse0fn = 0;

  while (n > 0) { //test expression
  	//loop body
   reverse0fn = reverse0fn * 10 + n % 10;
    n = n /10;
   }

   cout << " Reverse of n is: " << reverse0fn;
 }
