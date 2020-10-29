//https://open.kattis.com/problems/batterup
#include<iostream>
using namespace std;
int main(){
    long double n,number,sum=0,count=0;
    cin >> n;
        for (int i=0; i<n; i++){
            cin >> number;
            if (number >= 0){
                sum += number;
                count++;
            }
        }
    cout <<(long double)(sum / count) << endl;
}
