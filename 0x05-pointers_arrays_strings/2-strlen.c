#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * int _strlen - returns the length of a string
 * @s: string
 * Description - returns the length of a string
 * Return: length of string
 */

int _strlen(char *s)
{
	char *str;
	int len;

	str = "Holberton!";
	len = _strlen(s);
	printf("%d\n", len);
	return (0);
}
