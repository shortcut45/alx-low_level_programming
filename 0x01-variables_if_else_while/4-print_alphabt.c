#include <stdio.h>

/**
 * main - print the alphabet in lowercase,
 * except q and e,
 * followed by new line
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	 putchar('\n');
	 return (0);
}
