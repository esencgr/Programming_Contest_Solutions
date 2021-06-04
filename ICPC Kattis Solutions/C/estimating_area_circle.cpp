//open.kattis.com/problems/estimatingtheareaofacircle
#include <iostream>
#include <cmath>
using namespace std;
int main(){
   double r, m, c;

   while ( cin >> r >> m >> c  &&  r!=0  &&  m!=0  &&  c!=0 ){
       double circle_real = M_PI * pow( r, 2 );
       double circle_est  = pow((r * 2), 2) * ( c / m );

       cout << fixed;
       cout.precision(9);
       cout << circle_real << " " << circle_est << endl;
   }
 return 0;
}
