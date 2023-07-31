#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment to check
 * @accept: segment of s which consist only of bytes from accept
 * Return: returns number of bytes in initial segment of s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
