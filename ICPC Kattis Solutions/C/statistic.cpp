//https://open.kattis.com/problems/statistic
#include <iostream>
#include <cmath>
using namespace std;

int small ( int [], int );
int big ( int [], int );
int range ( int [], int );

int main() {
      int n;
      int j = 1;

      while (cin >> n){
          int number [ n ];

          for ( int i = 0;  i < n;  i++)
              cin >> number[ i ];

          int res_min = small ( number, n );
          int res_max = big ( number, n );

          cout << "Case " << j << ": " << res_min << " " << res_max
          << " " << res_max - res_min << endl;
          j++;
      }

 return 0;
}

int small ( int array[], int size ){
    int min = array[ 0 ];

    for ( int i = 0;  i < size;  i++){
        if ( array[ i ] < min )
           min = array[ i ];
    }
    
    return min;
}

int big ( int array[], int size ){
   int max = array[ 0 ];

   for ( int i = 0;  i < size;  i++){
       if ( array[ i ] > max )
          max = array[ i ];
  }

  return max;
}
