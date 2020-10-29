//https://open.kattis.com/problems/easiest
#include <iostream>
using namespace std;
int digit ( long int );
int main() {

    int num, b, sum_digit, x;
    cin >> num;

    do{
       if ( num == 0 )
           break;
       sum_digit = digit ( num );
       int i = 10;
       while ( i++ ) {
          x = digit (num * i);
             if ( x == sum_digit){
                cout << i << endl;
                break;
             }
       }
    cin >> num;
    } while ( num != 0 );

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
