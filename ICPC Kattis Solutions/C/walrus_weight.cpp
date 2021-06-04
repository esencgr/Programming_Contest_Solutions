//https://open.kattis.com/problems/walrusweights
#include <iostream>
#define SIZE 2200
using namespace std;

int main() {
    bool possible[SIZE] = {0};
    possible[0] = true;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int weight;
        cin >> weight;
        for(int j = SIZE-weight-1; j >= 0; j--) {
            if(possible[j]) {
                possible[j+weight] = true;
            }
        }
    }

    int closest = 0;
    for(int j = 0; j < SIZE; j++) {
        if(possible[j] && abs(1000-j) <= abs(1000-closest)) {
            closest = j;
        }
    }
    cout << closest << endl;
 return 0;
}
