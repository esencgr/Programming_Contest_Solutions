//https://open.kattis.com/problems/synchronizinglists
#include <iostream>
using namespace std;

void order ( short int[], int );
void compare ( short int [], short int [], short int [], short int[ ], int  );

int main(){
    int n;
    cin >> n;
    short int list1[ n ], ord_list1[ n ], list2[ n ], ord_list2[ n ];

    do {
        for (int i = 0; i < n; i++)
            cin >> list1[ i ];
        for (int i = 0; i < n; i++)
             cin >> list2[ i ];

        compare( list1, ord_list1, list2, ord_list2, n );

    } while( cin >> n && n != 0);

    return 0;
}

void order ( short int arr[], int sz ) {
    short int temp;
    for (int t = 0; t < sz-1; t++){
        for (int i = 0; i < sz-1; i++){
            if ( arr[ i ] > arr[ i+1 ] ){
                temp = arr[ i ];
                arr[ i ] = arr[ i+1 ];
                arr[ i+1 ] = temp;
            }
        }
    }
}

void compare ( short int l1[], short int ord_l1[], short int l2[], short int ord_l2[], int sz ){
    for (int i = 0; i < sz; i++) {
         ord_l1[ i ] = l1[ i ];
         ord_l2[ i ] = l2[ i ];
    }

    order( ord_l1, sz );
    order( ord_l2, sz );

    for (int i = 0; i < sz; i++){
        for (int j = 0; j < sz; j++){
            if (ord_l1[ i ] == l1[ j ]){
                l2[ j ] = ord_l2[ i ];
            }
        }
    }

    for (int i = 0; i < sz; i++)
         cout << l2[ i ] << endl;
    cout << endl;
}
