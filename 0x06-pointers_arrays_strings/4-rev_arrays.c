#include "main.h"

/**
 * reverse_array -> reverse the content of an array of integers
 * @a: array
 * @n: an element of array
 */

void reverse _array(int *a, int n)
{
	int i;
	int y;

	for (i = 0; i < n / 2; i++)
	{
		y = a[i] = a[n - i - 1];
		a[n - i - 1] = y;
	}
}
