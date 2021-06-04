//https://open.kattis.com/problems/encodedmessage
#include <iostream>
#include <cmath>

using namespace std;
int main(){

   int n;
   cin >> n;

   while ( n-- ){
     string word;
     cin >> word;

     int limit = sqrt(word.length());
     string arr[ limit ][ limit ];
     int count = 0;
     
        for(int i = 0;  i < limit;  i++){
            for (int j = 0;  j < limit;  j++) {
                arr[ i ][ j ] = word[ count ];
            count ++;
            }
        }

        for(int i = limit-1;  i >= 0;  i--){
            for (int j = 0;  j < limit;  j++) {
                cout << arr[ j ][ i ];
            }
        }
        cout << endl;
   }

  return 0;
}
