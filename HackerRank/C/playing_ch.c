#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch[5];
    char s[20];
    char sen[100];

    scanf("%s", ch );
    scanf("%s", s );
    scanf("\n");
    fgets(sen, sizeof(sen), stdin);  // read string

    printf("%s\n", ch ); 
    printf("%s\n", s ); 
    puts(sen);   
    return 0;
}