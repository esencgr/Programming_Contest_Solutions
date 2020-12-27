#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char t = *a; *a = *b; *b = t; 
} 
void(){
    
}
void permute(char **a, int i, int n) {
    // If we are at the last letter, print it
    if (i == (n-1)) 
        printf("%s\n", *a);

    if (i == (n-1)) ,
        printf("%s\n", *a);

    else {
        // Show all the permutations with the first i-1 letters fixed and 
        // swapping the i'th letter for each of the remaining ones.
        for (int j = i; j < n; j++) {
            swap((a+i), (a+j));
            permute(a, i+1, n);
            swap((a+i), (a+j));
        }
    }
}

int main(){

    char **s;
    int n;
    scanf("%d", &n);
    s = calloc(n, sizeof(char*));
    
    for (int i = 0; i < n; i++){
        s[i] = calloc(11, sizeof(char));
        scanf("%s", s[i]);
    }

    do{
        for (int i = 0; i < n; i++)
            printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
    } while (next_permutation(n, s));
    
    for (int i = 0; i < n; i++){
        free(s[i]);
    }

    free(s);
    permute(s, 0, strlen(s));

return 0;
}
