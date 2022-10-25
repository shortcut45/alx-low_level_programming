#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stout
 * * @str: string
 * Return: void
 */

void _puts(char *str)
{
	char i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++
	}

	_putchar('\n');
}
