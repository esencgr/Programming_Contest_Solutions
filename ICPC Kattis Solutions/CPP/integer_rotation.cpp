//https://open.kattis.com/problems/introtation
#include <iostream>
using namespace std;
int digit ( int );
int main(){
  int n, a, b, dig, temp, count=0;
  cin >> n;
  for (int k=0; k<n; k++)
      cin >> a >> b;

      for (int i=a; i<=b; i++){
          if ( i % 10 != 0){
              dig=digit(i)-1;
              temp = ((i % 10) * (10^dig)) + (i/10);
              if( temp < b)
                 count++;
          }
      }

  cout << (count)<< endl;
  return 0;
}
int digit(int number){
    int count =0;
    while (number>1){
         number /= 10;
         count++;
    }
return count;
}
