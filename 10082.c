#include <stdio.h>

int main() {
	char kb[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char c;
	int i;

	while( (c = getchar()) != EOF) {
		if( c == ' ' || c == '\n') {
			printf("%c", c);
			continue;
		}
		for(i = 0; kb[i] != c; i++);
		printf("%c", kb[i-1]);
	}

	return 0;
}
