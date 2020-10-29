//https://open.kattis.com/problems/fallingapart
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a,b,c;
    while ( cin >> a >> b >> c && a!=0, b!=0, c!=0 ) {
        int hipo = max (a, max( b, c ));
        if( a == hipo )
            swap( a, c );
        else if( b ==  hipo )
            swap( b, c );
        cout << ( a*a + b*b == c*c  ? "right" : "wrong" ) << endl;
    }
    return 0;
}
