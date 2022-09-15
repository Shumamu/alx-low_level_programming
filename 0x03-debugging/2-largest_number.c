#include "main.h"

/**
 * largest_number - retunrs the largest number of 3 numbers
 *
 * @a: first number
 * @b: second number
 * @c: third number
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
