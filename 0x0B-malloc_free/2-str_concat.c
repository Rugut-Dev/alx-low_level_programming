#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: string 2
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *out;
	unsigned int i, j, k, max;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	out = malloc(sizeof(char) * (i + j + 1));

	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		out[k] = s1[k];

	max = j;
	for (j = 0; j <= max; k++, j++)
	{
		out[k] = s2[j];
	}

	return (out);
}
