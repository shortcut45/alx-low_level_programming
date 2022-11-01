#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of the memory area
 * @src: source of memory
 * @n: number of bytes to copy
 *
 * Return: poitner dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
