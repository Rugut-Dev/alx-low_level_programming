#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character ina a string
 *
 * @s: pointer to string;
 * @c: character being located
 * Return: returns pointer to first occurence or NULL if
 * not available
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
