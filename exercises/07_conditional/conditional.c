#include <stdio.h>

/*
 * conditional - same as x ? y : z
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 *   Rating: 3
 */
int conditional(int x, int y, int z) {
  int m=~(!!x)+1;
  return(y&m)|(z&~m);
}

int main(void) {
  int x, y, z;
  if (scanf("%d %d %d", &x, &y, &z) != 3)
    return 1;
  printf("%d\n", conditional(x, y, z));
  return 0;
}
