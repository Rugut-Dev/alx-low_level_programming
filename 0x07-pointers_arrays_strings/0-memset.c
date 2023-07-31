#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory
 * @b: constant byte
 * @n: number of bytes to be filled in memory
 * Return: returns char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
