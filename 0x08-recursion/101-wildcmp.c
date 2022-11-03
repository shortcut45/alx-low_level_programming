#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * wildcmp - compares two strings
 * Return: 1 if identical
 * else Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	int c = strcmp(s1, s2);

	if (c == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
