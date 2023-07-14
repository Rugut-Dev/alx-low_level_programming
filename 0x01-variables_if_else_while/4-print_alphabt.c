#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		if (ab != 'q' && ab != 'e')
		{
			putchar(ab);
		}
	}
	putchar('\n');

	return (0);
}
