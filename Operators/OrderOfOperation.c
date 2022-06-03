#include <stdio.h>

int main() {
  
  int x;
  int y;

  x = (2 + 3) * 5;
  y = 2 / (4 + 6);

  printf("x is: %d\n", x);
  printf("y is: %d\n", y);
}

/*
Priority	Symbol
1	++
1	--
1	()
2	!
2	(typecast)
3	*
3	/
3	%
4	+
4	-
5	<, <=
5	>, >=
6	==, !=
7	&&
8	||
9	all assignment operators
*/