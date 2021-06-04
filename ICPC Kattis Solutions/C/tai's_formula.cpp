//https://open.kattis.com/problems/taisformula
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int n;
  cin >> n;

  double t[n], v[n];
  for (int i = 0;  i < n;  i++)
      cin >> t [i] >> v [i];

  double sum = 0.0;
  for (int i = 0;  i < n-1;  i++) {
      sum += (t [i+1] - t [i]) * ((v [i] + v [i+1]) / 2);
  }
  
  cout << fixed << (double)(sum/1000) << endl;
return 0;
}
