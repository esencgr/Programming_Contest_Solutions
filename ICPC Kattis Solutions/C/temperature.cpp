////https://open.kattis.com/problems/cold
#include <iostream>
using namespace std;
int main(){
  int n, t, count=0;
  cin >> n;
  for(int i=0; i<n; i++){
      cin >> t;
      if ( t < 0)
         count++;
  }
cout << count;
return 0;
}
