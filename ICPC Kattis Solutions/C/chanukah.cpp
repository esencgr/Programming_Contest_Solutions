//https://open.kattis.com/problems/chanukah
#include <iostream>
using namespace std;
int main(){
  int n, test, day;
  cin >> n;
  while (n--) {
      cin >> test >> day;
      cout << test << " " << ((day * (day+1) / 2) + day) << endl;
  }
 return 0;
}
