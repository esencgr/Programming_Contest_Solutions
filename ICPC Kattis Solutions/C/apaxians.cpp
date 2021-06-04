//https://open.kattis.com/problems/apaxiaaans
#include <iostream>
using namespace std;
int main(){
   string word;
   cin >> word;

      for(int i=0; i<word.length(); i++){
           if ( word [ i+1 ] == word [ i ] )
               continue;
           else
               cout << word [ i ];
      }
  return 0;
}
