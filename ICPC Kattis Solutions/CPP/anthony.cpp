
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, n;
    cin >> a >> n;

    double r = sqrt(a / M_PI);
    double c = 2 * M_PI * r;


    if(n > c) {
        cout << "Diablo is happy!" << endl;
    }
    else {
        cout << "Need more materials!" << endl;
    }
}
