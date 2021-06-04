// https://open.kattis.com/problems/simonsays
#include <iostream>
#include <string>
using namespace std;
int main() {
  int n;
  string s;
  cin >> n;

  for (int i = 0; i <= n; i++) {
      getline(cin, s);
      if (s.find("simon says ") != string::npos)
         cout << s.substr(11) << endl;
      else
         cout << endl;
  }

 return 0;
}
