// https://open.kattis.com/problems/janitortroubles
/*
   The maximum quadrilateral problem is quite easy to state: given four side lengths
   s1,s2,s3 and s4, find the maximum area of any quadrilateral that can be constructed
   using these lengths.
   p = (s1 + s2 + s3 + s4) / 2
   max_area = sqrt((p - s1) . (p - s2) . (p - s3) . (p - s4))
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
    double p, s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    p =( s1 + s2+ s3 + s4 )/ 2 ;
    double max_area = sqrt((p - s1) * (p - s2) * (p - s3) * (p - s4));

    cout << fixed;
    cout.precision(12);
    cout << max_area << endl;
}
