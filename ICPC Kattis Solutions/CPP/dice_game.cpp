//https://open.kattis.com/problems/dicegame
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
#define SIZE 4
int main(){
    srand(time(NULL));
    int sum_n = 0, sum_s = 0, temp=0, temp1=0;
    int n[SIZE], s[SIZE], score1=0, score2=0;

      for (int i=0; i<=SIZE-1; i++){
            cin >> n[i];
            sum_n += n[i];
      }
      cout << endl;

      for (int i=0; i<=SIZE-1; i++){
            cin >> s[i];
            sum_s += s[i];
      }

      if (sum_n > sum_s)
          cout << "Gunnar" << endl;
      else if (sum_n < sum_s)
          cout << "Emma" << endl;
      else
          cout << "Tie" << endl;

 return 0;
}
