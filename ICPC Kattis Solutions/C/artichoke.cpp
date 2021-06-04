// https://open.kattis.com/problems/areal
// price(n)=p⋅(sin(a.n+b)+cos(c⋅n+d)+2)
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;

    for (int i = 1; i <= n; i++){
        double ang1 = ( a*i ) + b;
        double ang2 = ( c*i ) + d;
        long double t = p * ( sin( ang1 ) + cos( ang2 ) + 2 );
        cout << t << endl;
    }

    return 0;
}
