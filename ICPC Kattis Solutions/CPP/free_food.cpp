//https://open.kattis.com/problems/freefood
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    bool array[ 365 ] = {0};
    for ( int i = 0;  i < t;  i++){
        int si, ti;
        cin >> si >> ti;

        for (int i = si;  i <= ti;  i++)
            array[ i ] = 1;

    }
    int count = 0;
    for ( int i = 1; i <= 365; i++) {
        if ( array [ i ] )
           count++;
    }

    cout << count;
    return 0;
}
