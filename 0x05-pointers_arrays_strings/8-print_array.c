#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array
 * @a: array of integrs
 * @n: number of items to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; n > 1; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
		}
	}
	printf("\n");
}
