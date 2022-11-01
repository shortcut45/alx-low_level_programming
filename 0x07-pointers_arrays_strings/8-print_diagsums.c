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

	unsigned int s, s1;

	s = 0;
	s1 = 0;

	for (q = 0; q < size; q++)
	{
		s += a[(size * 1) + q];
		s1 += [(size * (q + 1)) - (q + 1)];
	}
	printf("%d\n, %d\n", s, s1);
}
