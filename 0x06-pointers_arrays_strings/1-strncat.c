#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer variable containing string
 * @src: pointer variable containing string
 * @n : bytes used
 * Return: char_type
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';

	return (dest);
}
