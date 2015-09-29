#include <stdio.h>

int main() {
	int tests;
	while(scanf("%d", &tests) != EOF) {
		int sum[tests];
		int i;
		for(i=0; i<tests; i++) {
			sum[i] = 0;
			int a, b;
			scanf("%d", &a);
			scanf("%d", &b); 
			int j;
			for(j=a; j<=b; j++) {
				sum[i] += j%2==1? j : 0;
			}

		}
		
		for(i=0; i<tests; i++)
			printf("Case %d: %d\n", i+1, sum[i]);
	}
	return 0;
}
