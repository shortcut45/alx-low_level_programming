#include "main.h"
#include <stdio.h>

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
		i++;
		if (str[i] % 2 == 0)
		{
			printf("%s", str);
		}
	}
	printf("\n");
}
