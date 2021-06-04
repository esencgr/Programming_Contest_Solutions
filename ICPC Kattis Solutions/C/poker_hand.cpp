//https://open.kattis.com/problems/pokerhand
#include <iostream>
using namespace std;

int index ( char card ){
	switch ( card ){
		case 'A': return  0;
		case '2': return  1;
		case '3': return  2;
		case '4': return  3;
		case '5': return  4;
		case '6': return  5;
		case '7': return  6;
		case '8': return  7;
		case '9': return  8;
		case 'T': return  9;
		case 'J': return  10;
    case 'Q': return  11;
    default: return  12;
	}
}

int main(){
    int arr [ 13 ] = { 0 };
    char a, b, c, d, e, null;
    cin >> a >> null >> b >> null >> c >> null >> d >> null >> e >> null;

    arr [ index( a ) ]++;
    arr [ index( b ) ]++;
    arr [ index( c ) ]++;
    arr [ index( d ) ]++;
    arr [ index( e ) ]++;

    int max = 0;
    for (int i = 0;  i < 13;  i++){
        if ( arr [ i ] > max ){
           max = arr [ i ];
        }
    }

    cout << max << endl;
  return 0;
}
