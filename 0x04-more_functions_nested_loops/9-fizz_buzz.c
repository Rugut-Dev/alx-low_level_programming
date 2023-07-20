#include "main.h"
#include <stdio.h>

/**
 * main - fizz buzz test
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (((n % 3) == 0) && ((n % 5) != 0))
		{
			printf("Fizz");
			printf(" ");
		}
		else if (((n % 5) == 0) && ((n % 3) != 0))
		{
			printf("Buzz");
			printf(" ");
		}
		else if (((n % 5) == 0) && ((n % 3) == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (n == 1)
		{
			printf("%d \n");
		}
		else
		{
			printf("%d", n);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
