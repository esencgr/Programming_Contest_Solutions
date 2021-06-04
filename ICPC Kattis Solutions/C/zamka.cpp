//https://open.kattis.com/problems/zamka
#include <iostream>
using namespace std;
int dig_sum ( int );
int main(){

   int l , d, x;
   cin >> l >> d >> x;

   while ( l <= d ){
      if ( dig_sum (l) == x ){
         cout << l << endl;
         break;
      }
      l++;
   }

   while ( d >= l ){
      if ( dig_sum (d) == x ){
         cout << d << endl;
         break;
      }
      d--;
   }
 return 0;
}

int dig_sum ( int number ){
    int temp, sum = 0;
    while ( number > 0){
        temp = number % 10;
        sum += temp;
        number /= 10;
    }
 return sum;
}
