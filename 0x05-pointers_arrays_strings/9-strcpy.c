#include "main.h"

/**
 * _strcpy - copies the string, including the terminating null byte
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(chat *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}

	dest[i] = '\0';

	return (dest);
}
