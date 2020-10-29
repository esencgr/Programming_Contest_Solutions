/*
Anthony wonders, given an arbitrary real number N, what is the solution to ∞a=N? Unable to figure it out,
Anthony has asked you to write a program to help him!
Here’s a fun fact: A solution only exists for 1^e≤N≤e.
Input
The first line of input contains one real number N, 0.36788≤N≤2.718281.
Output
Output a single line containing a real number a, such that ∞a=N. Your answer will be considered correct if
its absolute or relative error doesn’t exceed 10^-5.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	double input;
	cin >> input;

	input = pow(input, 1 / input);
        cout << fixed << input << endl;

 return 0;
}
