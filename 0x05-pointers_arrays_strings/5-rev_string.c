#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: reserve string
 * Return: void
 */

void rev_string(char *s)
{
	int i;

	printf("%s\n", s);

	for (i = 10; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
