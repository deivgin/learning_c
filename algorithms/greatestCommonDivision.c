#include <stdio.h>

// This function uses a brute force method to find the greatest common division
// of two integers By going one by one each step of the way, it finds the
// greatest common division With this approach, if the smallest number is 500,
// then this code is run 500 times
int gcd(int x, int y) {
  int temporary;

  if (x < y) {
    temporary = x;
  } else {
    temporary = y;
  }

  while (x % temporary != 0 || y % temporary != 0) {
    printf("%d\n", temporary);
    temporary--;
  }

  return temporary;
}

// A faster method discovered by Eucledes iver 2000 years ago.
// This method is based on the fact that the greatest common division of two
// numbers is the same as the greatest common division of the smaller number
// It is an optimal algorythm as we do not need to factor the elements
// We use recursion here to find the greatest common division, with our escape
// being the y == 0
int eucledesAlgorythm(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    printf("%d %d\n", x, y);
    return eucledesAlgorythm(y, x % y);
  }
}

int main(void) {
  int x, y;

  printf("Enter two integers: ");
  scanf("%d %d", &x, &y);

  // Brute force method
  // int gcdNum = gcd(x, y);

  // eucledes
  int gcdNum = eucledesAlgorythm(x, y);

  printf("The greatest common division of %d and %d is %d\n", x, y, gcdNum);
}
