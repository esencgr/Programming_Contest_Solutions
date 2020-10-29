//https://open.kattis.com/problems/billiard
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, s, m, n;
    while ( cin >> a >> b >> s >> m >> n  &&  a!=0, b!=0, s!=0, m!=0, n!=0 ){

        double x_dist = a * m;
        double y_dist = b * n;

        double angle = atan( y_dist / x_dist ) * 180.0 / M_PI;
        double dist = sqrt( pow( x_dist, 2 ) + pow( y_dist, 2 ) );

        cout << fixed;
        cout.precision( 2 );

        cout << angle <<  " " << dist / s << endl;

    }
return 0;
}
