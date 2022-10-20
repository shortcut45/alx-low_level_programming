#include "main.h"

/**
 * print_numbers - print the numbers, 0 to 9,
 * followed by a new line
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
