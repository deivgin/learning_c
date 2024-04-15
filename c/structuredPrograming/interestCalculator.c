#include <stdio.h>

int main(void) {
  int days;
  float principal, rate, interest;

  printf("Enter loan principal (-1 to end): ");
  scanf("%f", &principal);

  printf("Enter interest rates: ");
  scanf("%f", &rate);

  printf("Enter term of the loan in days: ");
  scanf("%d", &days);

  interest = principal * rate * days / 365;

  printf("The interest charge is $%.2f\n", interest);
}
