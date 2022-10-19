#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char ch = 'a';
	{
		while (i < 10)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++
	}
}
