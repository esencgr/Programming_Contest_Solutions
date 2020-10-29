//https://open.kattis.com/problems/aboveaverage
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int t, n;
    cin >> t;

    for ( int i = 0;  i < t;  i++ ){
        cin >> n;
        int notes[ n ];
        double sum = 0.0;
        for ( int j = 0;  j < n;  j++){
            cin >> notes[ j ];
            sum += notes[ j ];
        }

        double avarage = sum / n;
        double count = 0;
        for ( int k = 0;  k < n;  k++){
            if ( notes[ k ] > avarage ){
                count++;
            }
        }
        double rank = count / n;
        cout << fixed;
        cout.precision(3);
        cout << ((double) rank) * 100 << "%"<< endl;
    }

    return 0;
}
