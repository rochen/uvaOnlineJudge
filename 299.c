#include <stdio.h>

int main() {
	int t, n, swap, i, j, tmp;
	int num[50];

	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(i=0; i<n; i++) {
			scanf("%d", &num[i]);
		}

		swap = 0;
		for(i=0; i<n; i++) {
			for(j=i+1; j<n; j++) {
				if(num[i] > num[j]) {
					tmp = num[j];
					num[j] = num[i];
					num[i] = tmp;
					swap++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", swap);
	}
	return 0;
}
