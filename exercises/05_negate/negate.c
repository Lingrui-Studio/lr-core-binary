#include <stdio.h>

/*
 * negate - return -x
 *   Example: negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int negate(int x) {
  return ~x+1;
}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", negate(x));
  return 0;
}
