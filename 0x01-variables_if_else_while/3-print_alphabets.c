#include <stdio.h>

/**
 * main - prints the alphabet is lowercase and uppercase
 * follwed by a new line
 *return: Always 0 (Success)
 */

int main(void)
{
	char ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
