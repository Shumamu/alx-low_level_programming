#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: characters to check for uppercase
 *
 * Return: 1 if uppercase, 0 if not uppercase
 */

int -isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
