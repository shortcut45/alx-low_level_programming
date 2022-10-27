#include "main.h"
#include <string.h>
#include <stdio.h>

/** _strcat - concatenates two strings
 * @dest - prints a string
 * @src - prints a string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
}

int main(void)
{
	char dest[10] = "Hello ";
	char src[10] = "World!\n";

	_strcat(dest, src);

	printf("%s\n", dest);
	return(0);
}
