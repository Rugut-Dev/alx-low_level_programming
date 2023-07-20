#include <stdio.h>

/**
 * main - fizz buzz test
 * For multiple of 3 prints Fizz
 * For multiples of 5 prints Buzz
 * For both, prints FizzBuzz
 * Return: void
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (n % 5 == 0 && n % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n == 1)
		{
			printf("%d ", n);
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return 0;
}
