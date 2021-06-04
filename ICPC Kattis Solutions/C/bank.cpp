//https://open.kattis.com/problems/bank
/*
4 4
1000 1
2000 2
500 2
1200 1
= 4200

3 4
1000 0
2000 1
500 1
= 3000
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int ci[ n ], ti[ t ], count = 0;

    for (int k = 0; k < n; k++)
        cin >> ci[ k ];

    for (int p = 0; p < t; p++)
        cin >> ti[ p ];

    for (int tour = 0; tour < t-1; tour++) {
        for (int i = 0; i < t; i++) {
            if (ti[ tour ] == ti[ i+1 ]) {
               count++;
            }
        }
    }
    cout << count;
    return 0;
}
