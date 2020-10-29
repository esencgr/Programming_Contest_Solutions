//https://open.kattis.com/problems/autori
#include <iostream>
using namespace std;
int main(){
  char string[100];
  cin >> string;
  int count = 0, size=0;

      for (int i=0; string[i] != '\0'; i++)
            size++;

      for (int i=0; i < size; i++){
            if (i==0)
               cout << string [i];
            if (string[i] == '-'){
               cout << string[i+1];
            }
      }
  return 0;
}
