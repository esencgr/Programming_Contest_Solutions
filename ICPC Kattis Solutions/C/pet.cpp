//https://open.kattis.com/problems/pet
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int player[5][4] = {0},temp, sum[5] ={0}, biggest = 0;

    for (int i=0; i<5; i++){
        for (int j=0; j<4; j++){
           cin >> player [i][j];
           sum [i] += player[i][j];
        }
        if (sum[i] > biggest)
           biggest = sum[i];
    }
    for (int i=0; i<5; i++){
        if (sum[i] == biggest)
           cout << i+1;
    }

    cout << " " << biggest;
 return 0;
}
