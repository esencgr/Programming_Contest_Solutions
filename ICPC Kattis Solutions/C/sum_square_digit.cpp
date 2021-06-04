//https://open.kattis.com/problems/sumsquareddigits
#include <iostream>
using namespace std;
int main(){
  int cases, k , b, n, sum;
  cin >> cases;
    while (cases--){
       cin >> k >> b >> n;
       sum = 0;
       while (n > 0){
          sum += (n % b) * (n % b);
          n /= b;
       }
       cout << k << " " << sum << endl;
    }
return 0;
}
