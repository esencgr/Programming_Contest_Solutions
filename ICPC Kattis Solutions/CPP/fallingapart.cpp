//https://open.kattis.com/problems/fallingapart
#include <bits/stdc++.h>
using namespace std;
void order ( int[], int );
void choose ( int[],int, int );

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int a[ n ];
    for (int i = 0; i < n; i++)
        cin >> a[ i ];

    order( a, n );

    int alice = 0 , bob = 0;
    for (int i = 0; i < n; i++) {
        if ( i % 2 == 0 )
             alice += a[ i ];
        else
             bob += a[ i ];
    }
    cout << alice <<  " "  << bob;
}

void order ( int arr[], int sz ) {
    short int temp;
    for (int t = 0; t < sz-1; t++){
        for (int i = 0; i < sz-1; i++){
            if ( arr[ i ] < arr[ i+1 ] ){
                temp = arr[ i ];
                arr[ i ] = arr[ i+1 ];
                arr[ i+1 ] = temp;
            }
        }
    }
}
