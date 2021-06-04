// https://open.kattis.com/problems/parking2
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int test;
    cin >> test;

    while ( test-- ){
        int sto;
        cin >> sto;

        int s, l, temp;
        cin >> temp;
        s = temp;
        l = temp;
        for (int i = 0; i < sto - 1; i++) {
            cin >> temp;
            s = min ( s, temp );
            l = max ( l, temp );
        }
        cout << ( l - s ) * 2 << endl;
    }
    return 0;
}
