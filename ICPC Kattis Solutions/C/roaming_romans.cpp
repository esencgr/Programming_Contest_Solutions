//https://open.kattis.com/problems/romans
#include <iostream>
using namespace std;
int main(){
  double number, result;
  int x, temp;
  cin >> number;
  result = (number*1000*5280/4854);
  x = result * 10;

     if (x % 10 <= 5)
        cout << (int)result;
     else
        cout << (int)result + 1;
  return 0;
}
