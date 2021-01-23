#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double area(triangle t){
   double a = t.a;
   double b = t.b;
   double c = t.c;

   double p = ( a + b + c ) / 2;
   long double s = ( p * (p-a) * (p-b) * (p-c) );
   return s;
}
void sort_by_area(triangle* tr, int n){
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n-1; i++){
            if (area(tr[i]) > area(tr[i + 1])){
                triangle tm = tr[i];  
                tr[i] = tr[i + 1];
                tr[i + 1] = tm; 
            }
        //printf("%lf\n", area(tr[i]));   
        }
    }
}

int main(){
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}