#include <stdio.h>

int main() {
	char str[1024];
	int i, max;
	long int x, y;

	gets(str);
	sscanf(str, "%d", &max);

	for(i=0; i<max; i++) {
		gets(str);
		sscanf(str, "%ld %ld", &x, &y);
		
		if(x > y) printf(">\n");
		if(x < y) printf("<\n");
		if(x == y) printf("=\n");
	}

}
