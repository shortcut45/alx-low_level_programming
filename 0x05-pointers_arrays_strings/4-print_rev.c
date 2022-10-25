#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int length = strlen(s);

	while (i > length)
	{
		length--;
		for (i = length; i >+ 0; i--)
		{
			printf("%c", s[i]);
		}
	}
}

int main(void)
{
	char s[] = "i do not fear computers. I fear the lack of them = Isaac Asimov";
	print_rev(s);
	printf("\n");
	return 0;
}
