#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory blocks using malloc and free
 * @ptr: pointer
 * @old_size: size to be located
 * @new_size: new size
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
