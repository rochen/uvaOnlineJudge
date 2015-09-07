#include <stdio.h>

int main() {
  int v, a;
  char str [100];

  while(gets(str)) {
    sscanf(str,"%d %d",&v,&a);
    printf("%d\n", v * a * 2);
  }
}
