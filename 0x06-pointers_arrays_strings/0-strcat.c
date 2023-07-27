#include "main.h"

/**
 * _strcat - appends two strings
 * @dest: pointer to string
 * @src: pointer variable to string
 * Return: char_type
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
