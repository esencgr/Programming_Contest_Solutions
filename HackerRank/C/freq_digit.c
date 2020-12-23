
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char *str;
    str = (char*) malloc(sizeof(char) * 1000);
    
    scanf ("%s", str);
    
    int arr[10] = {0};
    int size = strlen(str);
    

    for (int i = 0; i < size; i++){
        for (int j = 0; j < 10; j++){
            if (((int)(str[i]) - 48) == j){
                arr[j]++;
            }
        }
    }     
    
    for (int i = 0; i < 10; i++) {
        printf ("%d ", arr[i]);
    } 

    return 0;
}
