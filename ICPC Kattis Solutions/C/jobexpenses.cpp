//https://open.kattis.com/problems/jobexpenses
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int exp, sum = 0;
    while ( n-- ){
        cin >> exp;
        if ( exp < 0 )
           sum += exp;
    }

    cout << (-1) * sum << endl;
    return 0;
}
