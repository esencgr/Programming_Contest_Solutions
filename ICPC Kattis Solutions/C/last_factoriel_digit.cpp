//https://open.kattis.com/problems/lastfactorialdigit
#include <iostream>
#include <math.h>
using namespace std;
long factoriel (long);
int main(){
    int n, number;
    cin >> n;
       for (int i=0; i < n; i++){
           cin >> number;
           number = factoriel (number);
           cout << number % 10 << endl;
       }
}
long factoriel (long sayi){
    if (sayi <=1)
        return 1;
    else
        return (sayi * factoriel(sayi-1));
}
