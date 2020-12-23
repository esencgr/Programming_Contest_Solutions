#include <stdio.h>
#include <stdlib.h>

int* breakingRecords(int scores_count, int* scores, int* result_count) {
     int *a=(int*)malloc(2*sizeof(int));
     int min = scores[0], max=scores[0], hc = 0, lc = 0;
     for (int i = 0; i < scores_count; i++) {
         if (max < scores[i]){
             max = scores[i];
             hc++;
         }
         if (min > scores[i]){
             min = scores[i];
             lc++;
         }
     }
     a[0] = hc;
     a[1] = lc;
     *result_count = 2;
     return a;
}

int main(){
    int n;
    scanf("%d", &n);
    int* scores = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++){
        scanf("%d", (scores + i));
    }
    
    int scores_count = n;
    int result_count;
    int* result = breakingRecords(scores_count, scores, &result_count);

    for (int i = 0; i < result_count; i++){
         printf("%d ", *(result + i) );
    }
    printf("\n");

    return 0;
}
