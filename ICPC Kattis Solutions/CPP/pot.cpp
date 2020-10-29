//https://open.kattis.com/problems/pot
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n, number, base, sum = 0, x;
  cin >> n;
      for (int i = 0; i < n;  i++){
          cin >> number;
          base = number % 10;
          number /= 10;
          sum += pow (number,base);
       }
  cout << sum << endl;
return 0;
}
