// https://open.kattis.com/problems/filip
#include <iostream>
using namespace std;
int reverse (int);
int main()
{
  int x,y;
  cin >> x >> y;

  if (reverse(x) > reverse(y))
     cout << reverse(x) << endl;
  else
     cout << reverse(y) << endl;

  return 0;
}

int reverse(int number){
    int temp;
    int result = 0;
        while (number > 0){
            temp = number % 10;
            result = result * 10 + temp;
            number /= 10;
        }
    return result;
}
