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
	dest[] = "Hello";
	src[] = "World\n";
	char *str;

	printf("%s\n", dest);
	printf("%s", src);
	str = strcat(dest, src);
	printf("%s", dest);
	printf("%s", src);
	printf("%s", str);

}
