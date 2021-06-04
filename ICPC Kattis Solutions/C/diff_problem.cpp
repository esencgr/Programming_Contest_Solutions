//https://open.kattis.com/problems/difference problem
#include <iostream>
using namespace std;
int main(){
    unsigned long long int  num1,num2;
    long long int result;
    while (cin >> num1 && num1!= EOF ){
      cin  >> num2;
      result = (num1 - num2);
         if (result < 0)
           result *= -1;
      cout << result << endl;
    }
return 0;
}
