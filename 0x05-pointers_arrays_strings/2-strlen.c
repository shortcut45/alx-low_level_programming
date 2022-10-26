#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * int _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	s = "My first strlen!";
	len = _strlen(s);
	printf("%d\n", len);
	return 0;
}
