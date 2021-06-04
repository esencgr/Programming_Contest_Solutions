//https://open.kattis.com/problems/stackingcup
#include <iostream>
#include <algorithm>    // std::sort
using namespace std;
int main(){
    string line[0][1];
    int d, n;
    string color;
    cin >> n;
    while (n--) {
       cin >> line;
       if (line[0][0] >= '0' && line[0][0] <= '9') {
           color = line[1];
           d = line[0];
       }
       else {
           color = line[0];
           d = line[1] * 2;
       }
    sort.Add (d);
    }
return 0;
}
