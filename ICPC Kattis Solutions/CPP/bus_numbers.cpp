//https://open.kattis.com/contests/yvx6yh/problems/busnumbers
#include<iostream>
using namespace std;
int main(){
    int n ,temp;
    cin >> n;
    int bus[n];

       for (int i=0; i<n; i++)
            cin >> bus[i];

       for (int j=1; j<=n-1; j++){
          for (int k=0; k<=n-2; k++){
             if (bus[k] > bus[k+1]){
               temp = bus[k];
               bus[k] = bus[k+1];
               bus[k+1] = temp;
             }
          }
       }

    int count = 0;
    for (int i=0; i<=n-1; i++){

         if ((bus[i+1]) == bus[i]+1 && bus[i+1] == bus[i+2]-1)
            count++;
         else
            count = 0;
         if (count == 0)
            cout  << bus[i] << " ";
         else if (count == 1)
            cout  << bus[i] << "-";
         else if ( count > 1)
            cout  << "";
     }   
 return 0;
}
