#include <stdio.h>

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int estimateE(int n) {
  if (n == 0) {
    return 1;
  } else {
    return 1 / factorial(n) + estimateE(n - 1);
  }
}

int main(void) {
  int n, result;

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Factorial of %d is %d\n", n, factorial(n));
  printf("Estimate of e is %d\n", estimateE(n));
}
