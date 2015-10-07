#include <stdio.h>

int min (int a2, int a3, int a5) {
	int min;
	min = a2 < a3 ? a2 : a3;
	min = min < a5 ? min : a5;
	return min;
}

int main() {
	int ugly[1500] = {1};
	int i2 = 0, i3 = 0, i5 = 0;
	int u2, u3, u5;

	int i = 0;
	int last = 1;
	for(i = 1; i < 1500; i++) {

		for( ; i2 < i ; i2++) {
			if(ugly[i2] * 2 > last) {
				u2 = ugly[i2] * 2;
				break;
			}
		}
		for( ; i3 < i ; i3++) {
			if(ugly[i3] * 3 > last) {
				u3 = ugly[i3] * 3;
				break;
			}
		}

		for( ; i5 < i ; i5++) {
			if(ugly[i5] * 5 > last) {
				u5 = ugly[i5] * 5;
				break;
			}
		}

		last = min(u2, u3, u5);
		ugly[i] = last;
	}
	printf("The 1500'th ugly number is %d.\n", last);
	return 0;
}
