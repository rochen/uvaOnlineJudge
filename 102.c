#include <stdio.h>

int main() {
	const char *ans[] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};

	int b[3],c[3],g[3];
	int move[6];
	char str[1024];
	
	while(gets(str)) {
		sscanf(str, "%d %d %d %d %d %d %d %d %d", &b[0], &g[0], &c[0], &b[1], &g[1], &c[1], &b[2], &g[2], &c[2]);
		
		move[0] = b[1]+b[2]+c[0]+c[2]+g[0]+g[1]; //BCG
		move[1] = b[1]+b[2]+g[0]+g[2]+c[0]+c[1]; //BGC
		move[2] = c[1]+c[2]+b[0]+b[2]+g[0]+g[1]; //CBG
		move[3] = c[1]+c[2]+g[0]+g[2]+b[0]+b[1]; //CGB
		move[4] = g[1]+g[2]+b[0]+b[2]+c[0]+c[1]; //GBC
		move[5] = g[1]+g[2]+c[0]+c[2]+b[0]+b[1]; //GCB

		int i, min=0;
		for(i=1; i<6; i++) {
			if(move[i] < move[min]) {
				min = i;
			}
		}
		printf("%s %d\n", ans[min], move[min]);
	}

	return 0;
}
