//open.kattis.com/problems/pauleigon
#include <iostream>
#include <cmath>
using namespace std;
int main(){
   long int n, p, q;
   cin >> n >> p >> q;

   int sum = p + q;

   if ((sum / n) % 2 == 0)
        cout << "paul" << endl;
   else
        cout << "opponent" << endl;

 return 0;
}
