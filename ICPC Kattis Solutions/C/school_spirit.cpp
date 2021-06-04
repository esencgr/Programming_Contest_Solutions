//https://open.kattis.com/problems/schoolspirit
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long double score ( int[], int );
long double avg ( int[], int );

int main(){
    int n;
    cin >> n;
    int s[ n ];

    for ( int k = 0; k < n; k++)
        cin >> s[ k ];

    cout << fixed;
    cout.precision(9);
    cout << score( s, 2 );
    return 0;
}

long double score ( int s[], int n ){
    long double sum = 0.0;
    for ( int i = 0; i < n; i++ ){
        double fraction = pow( ( 4 ), i ) / pow( ( 5 ), i );
        sum += s[ i ] * fraction;
    }
    return sum/5;
}
