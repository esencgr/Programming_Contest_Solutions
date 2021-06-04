//https://open.kattis.com/problems/sumkindofproblem
#include <iostream>
using namespace std;
int main(){
    long int t, set, last;
    cin >> t;

    for ( int i = 0;  i < t;  i++){
        cin >> set >> last;
        cout << set << " " << last * ( last + 1 ) / 2 << " "
             << last * last << " " << last * (last + 1) << endl;
    }
    return 0;
}
