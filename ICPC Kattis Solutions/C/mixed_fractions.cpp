//https://open.kattis.com/problems/mixedfractions
#include <iostream>
using namespace std;
int main(){
    int num, div, mod;

    while ( cin >> num >> div  &&  num != 0  &&  div != 0 )
        cout << num / div << " " << num % div << " / " << div << endl;
  
    return 0;
}
