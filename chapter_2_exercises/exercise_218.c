#include <stdio.h>

int main(void) {
  int num1, num2;

  printf("Enter first number:\n");
  scanf("%d", &num1);

  printf("Enter second number:\n");
  scanf("%d", &num2);

  if (num1 > num2) {
    printf("%d is larger\n", num1);
  }

  if (num1 < num2) {
    printf("%d is larger\n", num2);
  }

  if (num1 == num2) {
    printf("Numbers are equal\n");
  }
}
