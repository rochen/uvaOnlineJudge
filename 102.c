#include <stdio.h>

int main() {
	int b[3],c[3],g[3];
	char str[1024];
	
	while(gets(str)) {
		sscanf(str,"%d %d %d %d %d %d %d %d %d", &b[0],&b[1],&b[2],&c[0],&c[1],&c[2],&g[0],&g[1],&g[2]);
		int i;
		for(i = 0; i < 3; i++) {
			printf("b[%d] c[%d] g[%d]\n", b[i], c[i], g[i]);
		}
	}

	return 0;
}
