//https://open.kattis.com/problems/differentdistances
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double x1, y1, x2, y2, p;
    long double dist = 0;

    while ( cin >> x1 >> y1 >> x2 >> y2 >> p ){
      
         if ( x1 == 0 )
            break;

         double x = 1 / p;
         dist = pow ( (pow( abs( x1-x2 ), p ) + pow( abs( y1-y2 ), p )), x );

         cout << fixed;
         cout.precision(11);
         cout << dist << endl;
    }

return 0;
}
