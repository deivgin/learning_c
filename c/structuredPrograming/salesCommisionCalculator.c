#include <stdio.h>

int main(void) {
  int payPerWeek = 200;
  float salesCommission = 0.09;
  float totalSales;
  float weeklyEarnings;

  printf("Enter total sales in dollars (-1 to end): ");
  scanf("%f", &totalSales);

  weeklyEarnings = payPerWeek + (totalSales * salesCommission);

  printf("Salary is: %.2f\n", weeklyEarnings);
}
