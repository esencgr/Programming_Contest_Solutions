//https://open.kattis.com/problems/sibice
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  double n,w,h,size;
  cin >> n >> w >> h;

  double hypo = sqrt((w*w) + (h*h));
     for (int j=0; j<n; j++){
         cin >> size;
         if (size <= hypo)
            cout << "DA" << endl;
         else
            cout << "NE" << endl;
     }

 return 0;
}
