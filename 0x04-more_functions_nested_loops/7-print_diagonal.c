#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: n is the number of times \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar('_');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
