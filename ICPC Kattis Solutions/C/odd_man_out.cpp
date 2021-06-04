//https://open.kattis.com/problems/oddmanout
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int case_number, n;
    cin >> case_number;

    for ( int c = 1; c <= case_number;  c++ ){
       cin >> n;
       long int guest[ n ];

       for ( int i = 0;  i < n;  i++)
           cin >> guest[ i ];

       sort( guest, guest+n );

       for ( int i = 0; i < n ; i++) {
           if ( guest[ i ] != guest[ i - 1 ]  &&  guest[ i ] != guest[ i + 1 ])
              cout << "Case #" << c << ": " << guest[i] << endl;
       }
    }

    return 0;
}
