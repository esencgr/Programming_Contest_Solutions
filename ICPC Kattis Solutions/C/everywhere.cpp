//https://open.kattis.com/problems/everywhere
#include <iostream>
using namespace std;
int main(){
  int n, num, count, ind;
  string temp;
  cin >> n;
      for (int i=0; i<n; i++){
          cin >> num;
          count = 0;
          string cities[num];
             for (int k=0; k<num; k++){
                 cin >> cities[k];
                 ind = k-1;
                 while (ind>=0){
                    if(cities[k] == cities[ind]){
                      count++;
                      break;
                    }
                    ind--;
                 }
             }
      cout << num - count << endl;
      }
  return 0;
}
