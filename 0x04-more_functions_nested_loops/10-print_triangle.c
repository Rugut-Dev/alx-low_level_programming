#include "main.h"

/**
 * print_triangle - prints triangle of size n
 *
 *@size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int n;

		for (n = 1; n <= size; n++)
		{
			int j, t;

			for (j = 0; j < size -  n; j++)
			{
				_putchar(' ');
			}
			for (t = 0; t < n; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
