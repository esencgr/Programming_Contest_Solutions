// https://open.kattis.com/problems/heirsdilemma
#include <iostream>
#include <cmath>
using namespace std;

bool div_check ( int );
bool dif_digit ( int );

int main(){
    int start, end;
    int count = 0;
    cin >> start >> end;

    while (start <= end){
        //cout << start << " divide --> " << div_check ( start ) << " different --> " << dif_digit ( start ) << endl;
        if ( div_check ( start ) && dif_digit ( start ) )
            count++;
        start++;
    }
    cout << count;

    return 0;
}

bool div_check ( int number ){
    int digit;
    int temp = number;
    for (int i = 1;  i <= 6;  i++){
        digit = number % 10;
        if ( digit == 0 || temp % digit != 0)
            return false;
        number /= 10;
    }
    return true;
}

bool dif_digit ( int number ){
    int temp[10] = { }, x;
    for (int i = 5;  i >= 0;  i--){
        int a = (pow( 10, i ));
        x = (number / a) % 10;
        temp[ x ] += 1;
    }

    for (int i = 0;  i < 10;  i++) {
        if (temp [ i ] > 1)
            return false;
    }
    return true;
}
