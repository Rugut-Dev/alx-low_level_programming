#include "main.h"

/**
 * print_last_digit - Prints last digit
 *
 * @num: The integer value
 * Return: The last digit
 */
int print_last_digit(int num)
{
	int ld;

	ld = num % 10;
	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');
	return (ld);
}
