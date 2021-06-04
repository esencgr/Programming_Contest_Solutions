//https://open.kattis.com/problems/hangingout
#include <iostream>
using namespace std;
int main(){
   int l, x, sum = 0;
   cin >> l >> x;
   string event[x];
   int person, not_valid = 0;

   for (int i = 0;  i < x;  i++) {
      cin >> event[i] >> person;

      if ( event[i]== "enter" ) {
         sum += person;
         if ( sum > l ){
           not_valid++;
           sum -= person;
         }
      }
      else if ( event[i] == "leave")
         sum -= person;
   }
 cout << not_valid;
 return 0;
}
