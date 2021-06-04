//https://open.kattis.com/problems/grassseed
#include <iostream>
using namespace std;
int main(){
  int test;
  double cost, w, l, total_area ;
  cin >> cost;
  cin >> test;
      for(int i=0; i<test; i++){
         cin >> w >> l;
         total_area += (w * l);
      }
  cout.precision(10);
  cout << fixed << total_area * cost << endl;
  return 0;
}
