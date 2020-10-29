//https://open.kattis.com/problems/hissingmicrophone
#include <iostream>
using namespace std;
int main(){
  char string[30];
  cin >> string;
  int count = 0,count1=0, size=0;

      for (int i=0; string[i] != '\0'; i++){
            size++;
            if (string[i] == 's')
               count1++;
      }
      if (count1<=1)
           cout << "no hiss" << endl;

      else {
         for (int i=0; i<size; i++){
                if (string[i] == 's'){
                   if (string[i] == string[i + 1] ){
                       count++;
                   }
                }
          }
          if (count == 0)
             cout << "no hiss" << endl;
          else if (count >= 1)
             cout << "hiss" << endl;
       }
return 0;
}
