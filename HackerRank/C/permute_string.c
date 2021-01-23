#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
For example, given the sequence [1, 2, 3, 4] (which is in increasing order), and given that the index is zero-based, the steps are as follows:
- Index k = 2, because 3 is placed at an index that satisfies condition of being the largest index that is still less than a[k + 1] which is 4.
- Index l = 3, because 4 is the only value in the sequence that is greater than 3 in order to satisfy the condition a[k] < a[l].
- The values of a[2] and a[3] are swapped to form the new sequence [1,2,4,3].
- The sequence after k-index a[2] to the final element is reversed.Because only one value lies after this index (the 3), 
  the sequence remains unchanged in this instance. 
  Thus the lexicographic successor of the initial state is permuted: [1,2,4,3]. 
*/
void swap_strings(char **a, char **b){
    char *temp= *a;
    *a = *b;
    *b = temp;
}

void reverse_strings(int len, char **s){
    for (int i = 0; i <= len / 2; i++) {
        if (i == len - i)
            continue;
        swap_strings(&s[i], &s[len - i]);
    }
}

int next_permutation(int n, char **s){
	int k, l;

    for (k = n - 2; k >= 0; k--)
        if (strcmp(s[k], s[k + 1]) < 0)
            break;
    if (k < 0)
        return 0;

    for (l = n - 1; l > k; l--)
        if (strcmp(s[k], s[l]) < 0)
            break;
    
    swap_strings(&s[k], &s[l]);
    reverse_strings(n - k - 2, &s[k+1]);
    return 1;
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
	
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	
	return 0;
}