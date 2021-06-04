//https://open.kattis.com/problems/server
#include <iostream>
using namespace std;
int main(){
    int n,t;
    cin >> n >> t;

    int task[ n ];
    for ( int i = 0;  i < n;  i++ )
        cin >> task[ i ];

    int sum = 0, temp;
    for ( int j = 0;  j < n; j++ ){
        sum += task[ j ];
        if ( sum > t ){
           temp = j;
           break;
        }
    }
    cout << temp << endl;
    return 0;
}
