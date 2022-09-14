#include "main.h"

/**
 * times_table - funtion that prints the 9 times table
 *
 * Return: times table
 */

void times_table(void)

{
	int row, column, d;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= 9; column++)
		{
			d = (row * column);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
