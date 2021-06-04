//https://open.kattis.com/problems/bela
#include <iostream>
using namespace std;
int main(){
  int n;
  char d;
  cin >> n >> d;
  int total = 0;
  for (int i = 0; i < 4*n; i++) {
      string r;
      cin >> r;
      char card = r[0];
      char suit = r[1];

      switch(card){
         case 'A':
             total += 11;
         break;

         case 'K':
             total += 4;
         break;

         case 'Q':
             total += 3;
         break;

         case 'J':
             total += suit == d ? 20 : 2;
         break;

         case 'T':
             total += 10;
         break;

         case '9':
             total += suit == d ? 14 : 0;
         break;
      }
  }
  cout << total << endl;
  return 0;
}
