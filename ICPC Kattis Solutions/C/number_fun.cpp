//https://open.kattis.com/problems/numberfun
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  double a,b,c,n;
  cin >> n;
    for (int i=0; i<n; i++) {
         cin >> a >> b >> c;
            if ( a+b == c )
               cout << "Possible" << endl;
            else if( a * b == c)
               cout << "Possible" << endl;
            else if( a / b == c || b / a == c)
               cout << "Possible" << endl;
            else if( a - b == c || b - a == c)
               cout << "Possible" << endl;
            else
               cout << "Impossible" << endl;
    }
  return 0;
}
