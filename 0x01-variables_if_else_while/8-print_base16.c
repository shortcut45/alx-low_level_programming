#include <stdio.h>

/** main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
