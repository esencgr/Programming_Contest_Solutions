//https://open.kattis.com/problems/conundrum
#include <iostream>
using namespace std;
int main(){
   string word;
   cin >> word;
   int switches = 0;
      for(int i=0; i<word.length(); i++){
        char c = word[i];
          switch (i % 3){
            case 0:
              if (c != 'P')
                 switches++;
            break;

            case 1:
              if(c != 'E')
                switches++;
            break;

            case 2:
              if(c != 'R')
                switches++;
            break;
          }
      }
  cout << switches;
  return 0;
}
