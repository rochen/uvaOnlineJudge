#include <stdio.h>
#include <string.h>

int main() {
	const int k = (int)('*'-'1');
	char line[1024];
	int i;
	
	while(fgets(line,1024,stdin)) {
		for(i=0; line[i]; i++) 
			line[i]+=k;
		puts(line);
	}

	return 0;
}
