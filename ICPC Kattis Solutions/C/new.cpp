#include <iostream>
using namespace std;
long factoriel (long);
void print_hello();
int main(){
  int n;
  cin >> n;
  long x[n] ={0};

  for (int i = 0; i < n;  i++) {
      int number;
      cin >> number;
      x[i] = factoriel(number);
  }

  for (int i = 0; i < n;  i++)
      cout << x[i] << " ";

  for (int i = 0; i < n;  i++)
      print_hello();

 return 0;
}

long factoriel(long number){
    if (number <= 1)
        return 1;
    else
        return (number * factoriel(number - 1));
}

void print_hello (){
    cout << "\nhello world" << endl;
}
