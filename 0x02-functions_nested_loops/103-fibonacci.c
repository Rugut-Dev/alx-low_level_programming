#include <stdio.h>

/**
 * main - finds and prints sum of even valued terms
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	unsigned long int b, c, n, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33 ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		n = b + c;
		b = c;
		c = n;
	}

	printf("%lu\n", sum);

	return (0);
}
