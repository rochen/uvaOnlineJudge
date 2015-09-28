#include <stdio.h>

int main() {
	int tests;
	while(scanf("%d", &tests) != EOF) {
		while(tests--) {
			int farms;
			int sum = 0;
			scanf("%d", &farms); 
			while(farms--) {
				int area, animals, degree;
				scanf("%d %d %d", &area, &animals, &degree);
				sum += area * degree;
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}
