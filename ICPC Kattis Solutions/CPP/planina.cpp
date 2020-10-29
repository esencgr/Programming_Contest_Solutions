//https://open.kattis.com/problems/planina
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n, left_point = 2, count=1;
  cin >> n;

  for (int iteration = 1; iteration <= n; iteration++){
         left_point += count;
         count *= 2;
  }
  cout <<(long int) pow(left_point,2);
  return 0;
}
