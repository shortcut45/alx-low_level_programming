#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: argument
 * @f: argument
 * Return: 0
 */

void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	
	f(name);
}
