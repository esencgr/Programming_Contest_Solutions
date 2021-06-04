//https://open.kattis.com/problems/humancannonball2
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   double v, ang, x, h1, h2, g = 9.81;
   int n;
   cin >> n;
   while ( n-- ){
       cin >> v >> ang >> x >> h1 >> h2;
       ang *= M_PI / 180.0;

       double t = x / (v * cos ( ang ));
       double h = v * t * sin ( ang ) - ( g * pow (t, 2) / 2 );

       if ( h >= h1 + 1  &&  h <= h2 - 1)
           cout << "Safe\n";
       else
           cout << "Not Safe\n";
   }
 return 0;
}
