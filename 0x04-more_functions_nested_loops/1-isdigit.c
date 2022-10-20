#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit 
 * 0 through 9
 * @c: integer c
 * Return: 1 if c, otherwise 0
 */

int _isdigit(int c)
{
	int x = 0;

	char digit;

	for (digit = '0'; digit <= '9'; digit = digit + 1)
	{
		if (digit == c)
		{
			x = 1;
		}
	}
	return (0);
}
