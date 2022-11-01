#include "main.h"
#include <stdio.h>

/**
 * @s: string
 * @c: character
 * Return: a pointer to the first occurence of the character
 * c in the ctring or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int q;

	while (1)
	{
		q = *s++;
		if (q == c)
		{
			return (s - 1);
		}
		if (q == 0)
		{
			return (NULL);
		}
	}
}
