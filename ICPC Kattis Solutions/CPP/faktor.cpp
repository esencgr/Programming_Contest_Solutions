//https://open.kattis.com/problems/faktor
#include <iostream>
using namespace std;
int main(){
  int x,y;
  cin >> x >> y;
  cout << (x * (y-1)) + 1 << endl;
  return 0;
}
