//https://open.kattis.com/problems/qaly
#include <iostream>
using namespace std;
int main(){
  int n;
  double qua, year, sum=0, total_year=0;
  cin >> n;
    for (int i=0; i<n; i++){
        cin >> qua >> year;
        sum += qua * year;
    }
  cout << (double)(sum) << endl;
  return 0;
}
