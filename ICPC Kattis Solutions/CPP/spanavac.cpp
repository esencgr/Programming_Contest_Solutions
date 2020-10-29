//https://open.kattis.com/problems/spavanac
#include <iostream>
using namespace std;
int main(){
  int hour, minute,total_time;
  cin >> hour >> minute;
      if(hour == 0)
         hour = 24;
  total_time = (hour * 60) + minute - 45;
  cout << total_time / 60 << " " << total_time % 60;
  return 0;
}
