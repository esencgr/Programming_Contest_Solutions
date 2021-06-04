//https://open.kattis.com/problems/zanzibar
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while ( n-- ){
        int total = 0, t1, t2;
        cin >> t1;
            while ( cin >> t2  &&  t2 != 0 ){
                if ( t1 * 2 < t2 )
                    total += t2 - ( 2 * t1 );
            t1 = t2;
            }
    cout << total << endl;
    }
 return 0;
}
