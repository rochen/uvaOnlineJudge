#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str[1024];

	while(gets(str)) {
		int i, k=0, count=0;
		for(i=0; i<strlen(str); i++) {
			if(k == 0 && isalpha(str[i])) {
				count++;
				k = 1;
			}
			if(k == 1 && !isalpha(str[i])) {
				k = 0;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
