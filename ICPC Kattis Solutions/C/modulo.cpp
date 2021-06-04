//https://open.kattis.com/problems/modulo
#include <iostream>
using namespace std;
int main(){
  int n=10, number, temp = 0, count = 0;
  int array[42] = {0};
  while (n--){
      cin >> number;
      temp = number % 42;
      ++array[temp];
  }
  for (int temp=0; temp<42; temp++){
    if (array[temp] > 0)
       count++;
  }
  cout << count;
  return 0;
}
