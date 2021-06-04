//https://open.kattis.com/problems/catalan
#include<iostream>
using namespace std;

unsigned long long int factoriel(int);
unsigned long long int combination(int,int);
unsigned long long int catalan (int);

int main(){
    int n,number;
    cin >> n;
    unsigned long long int numbers[n];
        for (int k=0; k<n; k++){
            cin >> number;
            numbers[k] = catalan(number);
        }
        cout << endl;
        for (int k=0; k<n; k++){
            cout << (unsigned long long int)numbers[k] << endl;
        }

return 0;
}

unsigned long long int factoriel(int x){

    int product = 1;
    for (int i=x;  i>=1;  i--)
        product = product * i;
    return product;
}

unsigned long long int combination(int y,int r){
    return factoriel(y) / (factoriel(r) * factoriel(y-r));
}

unsigned long long int catalan (int n){
    return (combination(2*n , n)) / (n+1) ;
}
