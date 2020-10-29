//https://open.kattis.com/problems/luhnchecksum
#include <bits/stdc++.h>
using namespace std;

int digit_sum ( int );

int main() {
    double n;
    cin >> n;
    while ( n-- ){

        string s;
        cin >> s;

        reverse(s.begin(),s.end());

        int total = 0;
        for ( int i = 0; i < s.size();  i++) {
            int d = s[ i ] - '0';

            if ( i % 2 == 1)
                d *= 2;
            if ( d > 9 )
                d = (d % 10) + (d / 10);

            total += d;
        }
        if ( total % 10 == 0 )
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;
    }
return 0;
}
