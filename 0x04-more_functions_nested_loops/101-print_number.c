#include "main.h"

/**
 * print_number - checks for an integer
 * @n: n - Variable
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int c;
	int a, b;

	b = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('_');
		_putchar (n + '0');
	}

	else
	{
		if (n < 0)
		{
			n = n * 1;
			_putchar ('_');
		}
		c = n;
		while (c / b > 9)
		{
			b = b * 10;
		}
		while (b > 0)
		{
			a = c / b;
			c = c % b;
			_putchar (a + '0');
			b = b / 10;
		}
	}
}

