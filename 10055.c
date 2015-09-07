#include <stdio.h>

int main() {
	unsigned long long int x,y;
	char str[1024];
	
	while(gets(str)) {
		sscanf(str,"%lld %lld", &x, &y);
		if(x>y)
			printf("%lld\n", x-y);
		else
			printf("%lld\n", y-x);
	}

	return 0;
}
