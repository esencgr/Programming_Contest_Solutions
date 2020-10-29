//https://open.kattis.com/problems/nodup
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
#define SIZE 80

void word_repeat(  char * );
bool compare( const char [], const char [] );
void my_toupper( char * );

int main( int argc, char const *argv[] ){

    char s[ SIZE ];
    cin.getline( s, SIZE );

    my_toupper ( s );
    word_repeat( s );

    return 0;
}

void word_repeat(  char *text ){
    char *temp, *text_ptr[ SIZE ];
    int count = 0, repeat = 0;

    temp = strtok( text, " " );
    for ( int i = 0; i < SIZE; i++ ){
        while ( temp ){
            text_ptr[ count++ ] = temp;
            temp = strtok( 0, " " );
        }
    }

    for ( int i = 0; i <= count-2; i++ ){
        for ( int k = i+1; k <= count-1; k++ ){
            cout << text_ptr[ i ] << " " << text_ptr[ k ] << endl;
            if ( compare ( text_ptr[ i ], text_ptr[ k ] ))
                 repeat++;
        }
    }

    if ( repeat > 0 )
       cout << "no" << endl;
    else
       cout << "yes" << endl;
}

bool compare( const char s1[], const char s2[] ){
    int size1 = strlen( s1 ), flag = 0;
    int size2 = strlen( s2 );

    if ( size1 != size2 )
        flag = 0;
    else{
        for (int i = 0; s1[ i ] != '\0', s2[ i ] != '\0'; i++ ){
            if ( s1[ i ] == s2 [ i ] )
                flag = 1;
        }
    }

    if ( flag == 0 )
       return 0;
    else
       return 1;
}

void my_toupper( char *word ){
    for ( ; *word != '\0'; word++ )
        cout << (char)( toupper( *word ));
}
