//https://open.kattis.com/problems/licensetolaunch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int day [ n ];
    for (int i = 0;  i < n;  i++)
        cin >> day [ i ];

    int min = day[ 0 ];
    for (int i = 0;  i < n;  i++){
        if ( day[ i ] < min )
           min = day [ i ];
    }

    for (int i = 0;  i < n;  i++){
        if ( day[ i ] == min ){
           cout << i << endl;
           break;
        }
    }

return 0;
}
