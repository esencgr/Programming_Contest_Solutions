// https://open.kattis.com/problems/areal
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long double area, side;
    cin >> area;

    side = sqrt ( area );
    
    cout << fixed;
    cout.precision(20);
    cout << side * 4 << endl;

    return 0;
}
