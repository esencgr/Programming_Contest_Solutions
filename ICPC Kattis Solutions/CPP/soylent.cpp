// https://open.kattis.com/problems/soylent
#include <iostream>
using namespace std;
int main(){
    int n, cal;
    cin >> n;

    for ( int i = 0; i < n; i++ ){
        cin >> cal;
        int bot = cal / 400;

        if (cal % 400)
            bot++;

        cout << bot << endl;
    }
    return 0;
}
