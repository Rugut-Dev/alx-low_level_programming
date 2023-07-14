#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char ab;
	char BC;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}
	for (BC = 'A'; BC <= 'Z'; BC++)
	{
		putchar(BC);
	}
	putchar('\n');

	return (0);
}
