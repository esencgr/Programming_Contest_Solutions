/*
Bill and Ted are taking a road trip. But the odometer in their car is broken,so they don’t know how many
miles they have driven. Fortunately, Bill has aworking stopwatch, so they can record their speed and the
total time they have driven. Unfortunately, their record keeping strategy is a little odd, so theyneed
 help computing the total distance driven. You are to write a program to do this computation.
For example:
  Speed in miles per hour  Total elapsed time in hours
              20                     2
              30                     6
              10                     7
this means they drove 2 hours at 20 miles per hour, then 6−2=4 hours at 30 milesper hour, then 7−6=1 hour at
10 miles per hour. The distance driven is then2⋅20+4⋅30+1⋅10=40+120+10=170 miles. Note that the total elapsed
time is alwayssince the beginning of the trip, not since the previous entry in their log.

The input consists of one or more data sets (at most 10). Each set starts with a line containing an integer n,
1≤n≤10, followed by n pairs of values, one pair per line. The first value in a pair, s, is the speed in miles
per hour and the second value, t, is the total elapsed time. Both s and t are integers, 1≤s≤90 and 1≤t≤12.
The values for t are always in strictly increasing order. A value of −1 for n signals the end of the input.
*/
#include <iostream>
using namespace std;
int main()
{
  int n, speed, time;
  while(cin >> n && n != -1){
     int old_time = 0;
     int total_miles = 0;
	   for(int i = 0; i < n; i++){
	        cin >> speed >> time;
      		total_miles += speed * (time - old_time);
      		old_time = time;
	   }
  cout << total_miles << " miles" << endl;
  }
return 0;
}
