#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Description: prints alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
