//https://open.kattis.com/problems/euler
#include <iostream>
#include <math.h>
using namespace std;
double factoriel (double);
int main(){
    int n;
    double sum = 0.0;
    cin >> n;

       for (int i=0;  i<=n;  i++)
          sum += 1 / (factoriel(i));

       cout.precision(15);
       cout << fixed << sum << endl;

    return 0;
}
double factoriel (double num){

    if (num <=1)
        return 1;
    else
        return (num * factoriel(num-1));

}
