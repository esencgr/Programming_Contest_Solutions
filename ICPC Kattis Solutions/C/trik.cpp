//https://open.kattis.com/problems/trik
#include <iostream>
#include <string>
using namespace std;

int main(){
    int x = 1, y = 2, z = 3;
    string moves;
    cin >> moves;

    for ( int i = 0; i < moves.size();  i++){

        if ( moves[ i ] == 'A' )
           swap( x, y );

        else if ( moves[ i ] == 'B')
           swap( y, z );

        else
           swap( x, z );

    }

    if ( x == 1 )
       cout << "1" << endl;
    else if ( y == 1)
       cout << "2" << endl;
    else
       cout << "3" << endl;

    return 0;
}
