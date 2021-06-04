//https://open.kattis.com/problems/detaileddifferences
#include <iostream>
using namespace std;
#define SIZE 50
int main() {
   char string1[SIZE],string2[SIZE];
   int size = 0, cases;
   cin >> cases;

   while (cases--){
       size = 0;
       cin >> string1 >> string2;

       for (int i=0; string1[i] != '\0'; i++)
           size++;

       for (int j=0; j<size; j++)
           cout << string1[j];
       cout << endl;

       for (int j=0; j<size; j++)
           cout << string2[j];
       cout << endl;

       for (int j=0; j<size; j++){
           if (string1[j] == string2[j])
               cout << "." ;
           else
               cout << "*";
     }
   cout << endl;
   }

return 0;
}
