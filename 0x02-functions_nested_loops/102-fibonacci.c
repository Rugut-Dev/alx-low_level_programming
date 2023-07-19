#include <stdio.h>

/**
 * main - Prints first 50 ibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	unsigned long a = 0, b = 1, sum;

	for (num = 0; num < 50; num++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
