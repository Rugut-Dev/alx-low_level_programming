#include "main.h"

/**
 * print_binary - prints binary rep of num
 * @n: num
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8, i, lead_zero = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = size - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if ((n & mask) != 0)
		{
			_putchar('1');
			lead_zero = 0;
		} else if (!lead_zero || i == 0)
			_putchar('0');
	}
}
