//https://open.kattis.com/problems/anothercandies
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    for ( int i = 0;  i < t;  i++ ){
        int n;
        cin >> n;

        int mod = 0;
        for ( int k = 0; k < n;  k++){
            long long candy;
            cin >> candy;
            mod += candy % n;
        }

        if ( mod % n == 0 )
           cout << "YES" << endl;
        else
           cout << "NO" << endl;
    }

    return 0;
}
