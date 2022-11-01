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

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (q = 0; q < size; q++)
	{
		sum += a[(size * q) + q];
		sum1 += a[(size * (q + 1)) - (q + 1)];
	}
	printf("%d\n, %d\n", sum, sum1);
}
