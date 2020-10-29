// https://open.kattis.com/problems/pieceofcake2
#include <iostream>
using namespace std;
int main(){

    int n, h, v, new_h, new_v;
    cin >> n >> h >> v;

    if ( n - h >= h )
        new_h = n - h;
    else
        new_h = h;

    if ( n - v >= v )
       new_v = n - v;
    else
        new_v = v;


    int volume = new_h * new_v * 4;
    cout << volume;

    return 0;
}
