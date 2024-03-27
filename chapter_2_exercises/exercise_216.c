# include <stdio.h>

int main ( void )
{
	int num1, num2;

	printf("Input first number:");
	scanf("%d", &num1);

	printf("Input second number:");
	scanf("%d", &num2);

	printf("Sum is: %d\n", num1 + num2);
	printf("Product is: %d\n", num1 * num2);
	printf("Difference is: %d\n", num1 - num2);
	printf("Quotient is: %d\n", num1 / num2);
	printf("Reminder is: %d\n", num1 % num2);
}
