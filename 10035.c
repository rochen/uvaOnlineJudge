#include <stdio.h>

int main() {
	int a, b, c;
	int x, y;
	int carry;
	
	while(scanf("%d %d", &a, &b) && (a || b)) {
		for(carry=0, c=0; a || b;) {
			x = a % 10;
			y = b % 10;
			a = a / 10;
			b = b / 10;

			if(x + y + c >= 10) {
				carry++;
				c = 1;
			} else {
				c = 0;
			}			
		}
	
		if(carry == 0) {
			printf("No carry operation.\n");
		} 
		if(carry == 1) {
			printf("1 carry operation.\n");
		}
		if(carry > 1) {
			printf("%d carry operations.\n", carry);
		}
		
	}

	return 0;
}
