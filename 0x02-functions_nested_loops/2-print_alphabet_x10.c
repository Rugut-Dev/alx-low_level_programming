#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int c;

	while (a <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		a++;
		_putchar('\n');
	}
}
