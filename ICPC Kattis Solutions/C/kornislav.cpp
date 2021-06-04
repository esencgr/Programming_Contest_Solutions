//https://open.kattis.com/problems/kornislav
#include <iostream>
#include <algorithm>
#define SIZE 4
using namespace std;
int main(){
  int x [SIZE];

  for ( int i = 0;  i < 4;  i++)
      cin >> x [i];
  cout << endl;

  sort(x , x+4);

  cout << x [0] * x [2] << endl;

return 0;
}
/*
// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);

    cout << "\nArray after sorting using "
         "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
} */
