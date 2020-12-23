#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int sum=0, df=0, num1=0, num2=0;
    float n1=0.0, n2 =0.0, s = 0.0, d =0.0;
        scanf( "%d %d", &num1, &num2 );
        scanf( "%f %f", &n1, &n2 );
        
        sum = num1+num2;
        df = num1-num2;
        
        s = n1+n2;
        d = n1-n2;

        printf( "%d %d\n", sum, df );
        printf( "%.1f %.1f", s, d );
    
    
return 0;
}