// https://open.kattis.com/problems/cd
#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    int ja, ji;

    while ( cin >> ja >> ji && ja != 0 && ji != 0){

        unordered_set<int> s;
        for ( int i = 0;  i < ja;  i++ ){
            int x;
            cin >> x;
            s.insert (x);
        }

        int d = 0;
        for ( int j = 0;  j < ji;  j++ ){
            int x;
            cin >> x;
            if ( s.count(x))
                d++;
        }
        cout << d << endl;
    }
    return 0;
}
