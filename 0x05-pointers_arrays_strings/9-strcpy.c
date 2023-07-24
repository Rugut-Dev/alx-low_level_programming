#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer variable
 * @src: pointer variable
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	char *orig_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (orig_dest);
}
