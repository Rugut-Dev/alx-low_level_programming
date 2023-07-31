#include "main.h"

/**
 * _memcpy - copies a block of memory to destination
 *
 * @dest: pointer to destination
 * @src: pointer to source of data to b copied
 * @n: bytes of memory
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
