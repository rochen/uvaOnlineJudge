#include <stdio.h>

int main ()
{
  char str[1024];
  int p=0;

  while(gets(str)) {
  	int i=0;
 	for(i=0; str[i]!='\0'; i++) {
 		if(str[i] == '"') {
 			p % 2 == 0? printf("``"): printf("''");
 			p++;
 		} else {
 			putchar(str[i]);
 		}
 	}	
 	putchar('\n');
  }

  return 0;
}
