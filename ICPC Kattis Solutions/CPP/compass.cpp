//https://open.kattis.com/problems/compass
#include <bits/stdc++.h>
using namespace std;

int pos( int, int );
int neg( int, int );

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n1, n2;
    cin >> n1 >> n2;
    int st = pos( n1 , n2);
    cout << st;
    return 0;
}
int pos( int n1, int n2 ){
    int step1 = 0, x1=n1, x2=n2;
    while (n1 != n2) {
        n1++;
        if (n1 == 360)
            n1 = 0;
        step1++;
    }

    int step2 = 0;
    while (x1 != x2) {
        x1--;
        if (x1 == 0)
            x1 = 360;
        step2++;
    }
    return step1 < step2 ? (step1) : (-step2) ;
}
