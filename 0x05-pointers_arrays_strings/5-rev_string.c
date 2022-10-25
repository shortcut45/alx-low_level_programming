#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: reserve string
 * Return: void
 */

void rev_string(char *s)
{
	printf("%s\n", s);
	int length = strlen(s);
	int i;

	for (i = length; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
