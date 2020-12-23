#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sz;
    scanf("%d", &sz);
    int *arr = (int*)malloc(sz * sizeof(int));
    
    for (int i = 0; i < sz; i++)
        scanf("%d",&*(arr + i));
    
    int sum = 0;
    for (int i = 0; i < sz; i++)
        sum += *(arr + i);
    
    printf("%d", sum);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    free(arr);
    return 0;
}