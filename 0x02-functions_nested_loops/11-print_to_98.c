#include "main.h"

/**
 * print_to_98 - Prints numbers to 98
 *
 * @n: number to count from
 * Return: Void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		int i;

		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}

	printf("98\n");
}
