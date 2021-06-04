//https://open.kattis.com/problems/judgingmoose
#include <iostream>
using namespace std;
int main(){
  int left, right;
  cin >> left >> right;

  if ( left == 0 && right == 0 )
      cout << "Not a moose" << endl;
  else if ( left == right )
      cout << "Even " << left * 2 << endl;
  else {
      if ( right > left )
         cout << "Odd " << right * 2 << endl;
      else
         cout << "Odd " << left * 2 << endl;
  }

return 0;
}
