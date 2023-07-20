#include "main.h"

/**
 * print_number - prints integer
 *
 *@n: niteger being printed
 * Return: void
 */
void print_number(int n)
{
	int div;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	div = 1;
	while (n / div >= 10)
	{
		div *= 10;
	}

	while (div != 0)
	{
		int digit;

		digit = n / div;
		_putchar('0' + digit);
		n %= div;
		div /= 10;
	}
}
