// https://open.kattis.com/problems/oddgnome
#include <iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;

    for ( int i = 0;  i < t;  i++ ){
        cin >> n;
        int array[ n ];

        for ( int e = 0;  e < n;  e++)
            cin >> array[ e ];

        for ( int k = 1;  k < n;  k++) {
            if ( array[ k ] != array[ k - 1 ] + 1 ){
                cout << k + 1 << endl;
                break;
            }
        }

    }
    return 0;
}
