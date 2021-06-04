//https://open.kattis.com/problems/sevenwonders
#include <iostream>
using namespace std;
int main(){
  string input;
  cin >> input;
  int t=0, c=0, g=0;

      for (int i=0; input[i] != '\0'; i++){
            if (input[i] == 'T')
               t++;
            else if (input[i] == 'C')
               c++;
            else if (input[i] == 'G')
               g++;
      }

      int total = t*t + c*c + g*g;
    	if (t != 0 && c != 0 && g != 0)
         total += 7 * (min(min(t, c), g));
    	cout << total << endl;

  return 0;
}
