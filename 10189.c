#include <stdio.h>

char map[102][102];

void mark(int i, int j) {
	map[i-1][j-1] = map[i-1][j-1] == '*' ? '*' : map[i-1][j-1] + 1;
	map[i][j-1]   = map[i][j-1]   == '*' ? '*' : map[i][j-1] + 1;
	map[i+1][j-1] = map[i+1][j-1] == '*' ? '*' : map[i+1][j-1] + 1;

	map[i-1][j]   = map[i-1][j]   == '*' ? '*' : map[i-1][j] + 1;
	map[i+1][j]   = map[i+1][j]   == '*' ? '*' : map[i+1][j] + 1;
	
	map[i-1][j+1] = map[i-1][j+1] == '*' ? '*' : map[i-1][j+1] + 1;
	map[i][j+1]   = map[i][j+1]   == '*' ? '*' : map[i][j+1] + 1;
	map[i+1][j+1] = map[i+1][j+1] == '*' ? '*' : map[i+1][j+1] + 1;
}

int main() {
	int t, m, n;
	char c;

	t = 1;
	while (scanf("%d %d", &m, &n) && (m || n)) {
		if (t != 1) printf("\n");

		int i, j;
		for (i = 1; i <= m; i++) {
			for (j = 1; j <= n; j++) {
				map[i][j] = '0';
			}
		}

		for (i = 1; i <= m; i++) {
			for (j = 1; j <= n; j++) {
				c = getchar();
				while (c == '\n') c = getchar();
				
				if (c == '*') {
					map[i][j] = '*';
					mark(i, j);
				}
			}
		}

		printf("Field #%d:\n", t++);
		for (i = 1; i <= m; i++) {
			for (j = 1; j <= n; j++) {
				printf("%c", map[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
