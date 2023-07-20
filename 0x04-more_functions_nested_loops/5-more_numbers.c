#include "main.h"

/**
 * more_numbers - prints 0-14 10 times then \n
 *
 * Return: Void
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
