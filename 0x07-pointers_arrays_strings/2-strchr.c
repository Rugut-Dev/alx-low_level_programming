#include "main.h"
#define NULL ((void *)0)

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
			return ((char *)s);
		}
		s++;
	}

	return (NULL);
}
