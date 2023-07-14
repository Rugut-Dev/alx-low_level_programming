#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char zy;

	for (zy = 'z'; zy >= 'a'; zy--)
	{
		putchar(zy);
	}
	putchar('\n');

	return (0);
}
