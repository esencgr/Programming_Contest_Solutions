//https://open.kattis.com/problems/vauvau
#include <iostream>
using namespace std;

void func ( int a, int b, int c, int d, int min ){
    int count = 0, dog1, dog2;
    int ab = a + b;
    int cd = c + d;
    dog1 = min % ab;
    dog2 = min % cd;

    if( dog1 > 0 && dog1 <= a )
        count++;
    if( dog2 > 0 && dog2 <= c)
        count++;

    if( count == 2 )
        cout << "both" << endl;
    else if( count == 1 )
        cout << "one" << endl;
    else
        cout << "none" << endl;

}
int main( ){

    int a, b, c, d, p, m, g;
    cin >> a >> b >> c >> d >> p >> m >> g;

    func( a, b, c, d, p);
    func( a, b, c, d, m);
    func( a, b, c, d, g);


    return 0;
}
