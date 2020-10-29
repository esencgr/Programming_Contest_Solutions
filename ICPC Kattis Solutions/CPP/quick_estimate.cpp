//https://open.kattis.com/problems/quickestimate
#include <iostream>
int digit (int);
using namespace std;
int main(){
    int n, number;
    cin >> n;
    int num [n];

    for (int i = 0;  i < n;  i++)
        cin >> num [i];

    for (int i = 0;  i < n;  i++)
        cout << digit (num [i]) << endl;

return 0;
}

int digit ( int number ){
   int count = 0;
   while ( number > 0){
      number /= 10;
      count++;
   }
return count;
}
/*
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string num;
        cin >> num;
        cout << num.length() << endl;
    }
}
*/
