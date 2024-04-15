#include <stdio.h>

// calculate if account has exeeded credit limit
int main(void) {
  int accountNumber;
  float balanceAtBeginningOfMonth;
  float sumOfAllItemsCharged;
  float sumOfAllCreditsApplied;
  float creditLimit;
  float newBalance;

  printf("Enter account number: ");
  scanf("%d", &accountNumber);

  printf("Enter balance at the begining of the month: ");
  scanf("%f", &balanceAtBeginningOfMonth);

  printf("Enter sum of all items charged: ");
  scanf("%f", &sumOfAllItemsCharged);

  printf("Enter sum of all credits applied: ");
  scanf("%f", &sumOfAllCreditsApplied);

  printf("Enter credit limit: ");
  scanf("%f", &creditLimit);

  newBalance =
      balanceAtBeginningOfMonth + sumOfAllItemsCharged - sumOfAllCreditsApplied;

  if (newBalance > creditLimit) {
    printf("Account: %d\n", accountNumber);
    printf("Credit limit: %.2f\n", creditLimit);
    printf("Balance: %.2f\n", newBalance);
    printf("Credit limit exceeded.\n");
  }
}
