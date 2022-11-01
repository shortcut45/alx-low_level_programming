#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrixx of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int q;

	unsigned int add, add1;

	add = 0;
	add1 = 0;

	for (q = 0; q < size; q++)
	{
		add += a[(size * q) + q];
		add1 += a[(size * (q + 1)) - (q + 1)];
	}
	printf("%d\n, %d\n", add, add1);
}
