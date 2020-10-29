// https://open.kattis.com/problems/rationalsequence2
#include <iostream>
using namespace std;

int solve( int, int );

int main(){
    int n;
    cin >> n;

    while (n--){
        int test, l, r;
        char c;
        cin >> test >> l >> c >> r;

        cout << test << " " << solve( l, r ) << endl;
    }
    return 0;
}

int solve ( int left, int right ){

    if ( left == right )
        return 1;

    if ( left < right )
        return 2 * solve( left, right - left );

    if ( left > right )
        return 2 * solve ( left - right, right ) + 1;
}
