#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string
 * Return: pointer
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*(s + 0));
		puts_recursion((s + 1));
	}
	else
	{
		putchar('\n');
		return;
	}
}
