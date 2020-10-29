//https://open.kattis.com/problems/harshadnumbers
#include <iostream>
using namespace std;
int digit ( long int );
int main() {
    long int num;
    cin >> num;

    int b;
    while ( 1 ){
       b = digit ( num );
       if ( num % b == 0)
           break;
       num++;
    }
    cout << num;

 return 0;
}

int digit ( long int n ){
    long int temp=0;
    while ( n > 0 ){
        temp += n % 10;
        n /= 10;
    }
 return temp;
}
