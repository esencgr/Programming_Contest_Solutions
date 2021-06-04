//https://open.kattis.com/problems/mjehuric
#include<iostream>
using namespace std;
int main(){
  int n = 5,temp;
  bool control = false;
  int bus[n];

       for (int i=0; i<n; i++)
            cin >> bus[i];

       for (int j=0; j<=n-2; j++){
           for (int k=0; k<=n-2; k++){
              control = false;
              if (bus[k] > bus[k+1]){
                 temp = bus[k];
                 bus[k] = bus[k+1];
                 bus[k+1] = temp;
                 control = true;
              }
              if (control){
                 for (int i=0; i<n; i++)
                     cout << bus[i] << " ";
                 cout << endl;
              }
           }
        }
return 0;
}
