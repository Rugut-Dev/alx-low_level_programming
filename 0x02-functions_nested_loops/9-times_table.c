#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, res, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;

			if (res > 9)
			{
				k = res % 10;
				l = (res - k) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(l + '0');
				_putchar(k + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(res + '0');
			}
		}
		_putchar('\n');
	}
}
