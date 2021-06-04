//https://open.kattis.com/problems/pizza2
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int r, c;
    double rate;

    cin >> r >> c;

    rate = pow ( r-c, 2 ) / pow ( r, 2 );

    cout << fixed << rate*100 << endl;

    return 0;
}
