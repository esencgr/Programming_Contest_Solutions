/*
You will be given the number of contestants in a hypothetical contest, the number of huffle-puff problems
that people solved in the contest and a description of each contestant. Now, find the number of carrots that
will be handed out during the contest.

Input starts with two integers 1≤N,P≤1000 on a single line, denoting the number of contestants in the contest
and the number of huffle-puff problems solved in total. Then follow N lines, each consisting of a single
non-empty line in which the contestant describes him or herself. You may assume that the contestants are good
at describing themselves, in a way such that an arbitrary 5-year-old with hearing problems could understand it.

Output should consist of a single integer: the number of carrots that will be handed out during the contest.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
     int a, b;
     string garbage;
     cin >> a >> b;
     getline(cin, garbage);

       for(int i = 0; i < a; i++)
          getline(cin, garbage);

     cout << b << endl;

return 0;
}
