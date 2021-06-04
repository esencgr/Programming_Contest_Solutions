//https://open.kattis.com/problems/skener
#include <iostream>
using namespace std;
int main(){
    int r, c, x, y;
    cin >> r >> c >> x >> y;

    char v[ r ][ c ];

    for ( int i = 0;  i < r;  i++){
        for ( int j = 0;  j < c;  j++){
             cin >> v[ i ][ j ];
        }
    }
    cout << endl;

    for ( int i = 0;  i < r*x;  i++){
        for ( int j = 0;  j < c*y;  j++){
             cout << v[ i/x ][ j/y ];
        }
    cout << endl;
    }

    return 0;
}
