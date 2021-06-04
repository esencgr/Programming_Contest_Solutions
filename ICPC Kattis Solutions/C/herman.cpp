//https://open.kattis.com/problems/herman
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i;
    cin >> i;
    double area, area2;

    area = M_PI * ( pow ( i, 2 ) );
    area2 = pow ( i, 2 ) * 2;

    cout << fixed << area << endl;
    cout << fixed << area2 << endl;

return 0;
}
