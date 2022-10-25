#include "main.h"

/**
 * puts2 - prints every pther character of string,
 * starting eith the first character
 * followed by a new line
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
