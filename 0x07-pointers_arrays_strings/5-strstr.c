#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: the first occurence of the string
 * Return: a pointer to the beginning of the located substring
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int q, w;
	for (i = 0; haystack[q] != '\0'; q++)
	{
		for (w = 0; needle[w] != '\0'; w++)
		{
			if (haystack[q + w] != needle[w])
			{
				break;
			}
		}
		if (!needle[w])
		{
			return (&haystack[q]);
		}
	}
	return (NULL);
}
