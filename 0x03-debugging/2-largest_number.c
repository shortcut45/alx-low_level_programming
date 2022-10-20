#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	a = 972;
	b = -98;
	c = 0;

    int largest;

    if (a > b && b > c)
    {
        largest = a;
	printf("%d is the largest number\n", largest);
    }
    else if (b > a && a > c)
    {
        largest = b;
	printf("%d is the largest number\n", largest);
    }
    else if (c > a && c > b)
    {
    	printf("%d is the largest number\n", largest);
    }
    else 
    {
        largest = c;
    }

    return (largest);
}
