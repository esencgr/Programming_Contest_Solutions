//https://open.kattis.com/problems/dicecup
#include <iostream>
#include <math.h>
using namespace std;
int main (){
  int d1,d2;
  cin >> d1 >> d2;
  int size = abs(d1 - d2);
     if (size == 0)
        cout << d1 + 1 << endl;
     else {
       for (int i=1; i<=size+1; i++){
          if (d1 < d2)
             cout << d1 + i << endl;
          else
             cout << d2 + i << endl;
       }
    }
return 0;
}
