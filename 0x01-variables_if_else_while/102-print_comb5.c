#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			int a_1 = a / 10;
			int a_2 = a % 10;
			int b_1 = b / 10;
			int b_2 = b % 10;

			putchar('0' + a_1);
			putchar('0' + a_2);
			putchar(' ');
			putchar('0' + b_1);
			putchar('0' + b_2);

			if (!(a == 99 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
