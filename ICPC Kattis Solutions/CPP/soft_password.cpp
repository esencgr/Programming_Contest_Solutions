// https://open.kattis.com/problems/softpasswords
#include <iostream>
#include <string.h>
using namespace std;
bool state = true;

int main(){

  string s, p;
  cin >> s >> p;

  int x = s.size(), y = p.size();

      if( s == p )
          state = true;

      else if( x == ( y+1 )){
          char last = s[ x-1 ];
          for( int i=0, j=0; s[i] != '\0', p[j] != '\0'; i++, j++ ){
              if( s[i] == p[j] && isdigit( last ) )
                  state = true;
              else
                  state = false;
          }
          char first = s[ 0 ];
          if( isdigit( first )){
              for( int i=1, j=0; s[i] != '\0', p[j] != '\0'; i++, j++ ){
                   if( s[i] == p[j] )
                       state = true;
                   else
                       state = false;
              }
          }
      }

      else{
          for( int i=0, j=0; s[i] != '\0', p[j] != '\0'; i++, j++ ){
              if( isupper( p[j] ) )
                  p[j] = tolower( p[j] );
              else
                  p[j] = toupper( p[j] );
           }
           if( s == p )
               state = true;
           else
               state = false;
      }

      if( state == true )
          cout << "Yes" << '\n';
      else
          cout << "No" << '\n';

  return 0;
}
