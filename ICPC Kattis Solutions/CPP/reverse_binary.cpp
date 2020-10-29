//https://open.kattis.com/problems/reversebinary
#include <iostream>
#include <cmath>
using namespace std;
int dig_num ( int );
int main(){
    int number, sum = 0;
    cin >> number;
    int base = dig_num ( number);

    while ( number > 1 ){
       sum += ( number % 2 ) * pow ( 2, base );
       number /= 2;
       base--;
    }
    cout << sum + 1 << endl;

return 0;
}

int dig_num ( int num ){
  int count = 0;
  while ( num > 1) {
      num /= 2;
      count++;
  }
return count;
}
