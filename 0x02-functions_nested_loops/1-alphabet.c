#include "main.h"
#include <stdio.h>

/**
 * main - prints the alphabet, in lowercase,
 * followed by a new line
 * Return: 0 (Success)
 */

void char print_alphabet(void);

int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
