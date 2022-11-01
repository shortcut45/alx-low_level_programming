#include "main.h"

/**
 * set_string - sets the vaule of a pointer to a char
 * @s: pointer to pointer
 * @to: string to set
 */

void set_string(char **s, char *to)
{
	*s = to;
}
