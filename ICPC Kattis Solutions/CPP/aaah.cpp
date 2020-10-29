//https://open.kattis.com/problems/aaah
#include <iostream>
using namespace std;
int main(){
  char string[1000], enable [1000];
  cin >> string >> enable;
  int count = 0, count1 = 0, size=0;

      for (int i=0; string[i] != '\0'; i++){
            if (string[i] == 'a')
               count++;
      }

      for (int i=0; enable[i] != '\0'; i++){
            if (enable[i] == 'a')
               count1++;
      }

      if (count >= count1)
         cout << "go" << endl;
      else
         cout << "no" << endl;

  return 0;
}
