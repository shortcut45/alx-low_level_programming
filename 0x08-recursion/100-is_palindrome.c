#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and
 * 0 if not
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;

	int h = strlen(s) - 1;

	if (s[i++] != s[h--])
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}
