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
	char s1[98] = "Hello";
	char s2[] = "World!";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
}
