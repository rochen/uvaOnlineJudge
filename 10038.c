#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n;
	int num[3001];
	int chk[3001];

	while(scanf("%d", &n) == 1) {
		int i;
		for(i=0; i<n; i++) {
			scanf("%d", &num[i]);
			chk[i]=0;
		}

		int diff;
		int jolly = 1;
		for(i=1; i<n; i++) {
			diff = abs(num[i-1] - num[i]);
			if(diff < n) {
				chk[diff] = 1;
			} else {
				jolly = 0;
				break;
			}
		}

		if(jolly) {
			for(i=1; i<n; i++) {
				if(chk[i] == 0) {
					jolly = 0;
					break;
				}
			}
		} 

		if(jolly) {
			printf("Jolly\n");
		} else {
			printf("Not jolly\n");
		}
	}
	return 0;
}
