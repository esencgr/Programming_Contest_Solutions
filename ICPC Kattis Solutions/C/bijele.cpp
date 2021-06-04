//https://open.kattis.com/problems/bijele
#include<iostream>
using namespace std;
int main (){
    int array[6] = {1, 1, 2, 2, 2, 8};
    int a[6]={0};
    for (int i=0; i < 6; i++) {
        cin >> a[i];
        cout << array[i] - a[i] << " ";
    }
return 0;
}
