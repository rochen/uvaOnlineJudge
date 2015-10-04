#include <stdio.h>

long long reverse(long long n) {
	long long reverse = 0;
    while (n != 0) {
     	reverse = reverse * 10;
      	reverse = reverse + n%10;
      	n = n/10;
   	}
   	return reverse;
}

int main() {
	int n, a;
	long long p, r;

	scanf("%d", &n);
	while(n--) {
		scanf("%lld", &p);
		r = reverse(p);
		a = 0;
		do {
			p = p + r;
			a++;
			r = reverse(p);
		} while( p != r);
		printf("%d %lld\n", a, p);
	}
	
	return 0;
}
