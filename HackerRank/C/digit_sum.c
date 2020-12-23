#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, dig, sum = 0;
    scanf("%d", &n);
    for(int i=0; i<5; i++) {
        dig = n % 10;
        n -= dig;
        n /= 10;
        sum += dig; 
    }
    printf("%d", sum );
    return 0;
}