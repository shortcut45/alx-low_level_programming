#include "main.h"

/**
 * string_toupper - changes all lowercase of letters of a string to uppercase
 * @upper: input of lowercase to uppercase
 * Return: uppercase
 */

char *string_toupper(char *upper)
{
	int i;

	for (i = 0; upper[i] != '\0'; i++)
	{
		if (upper[i] >= 'a' && upper[i] <= 'z')
		{
			upper[i] = ipper[i] - 32;
		}
	}
	return(upper);
}
