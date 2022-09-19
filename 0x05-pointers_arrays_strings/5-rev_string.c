#include "main.h"

/**
 * rev_string - revrse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i, a, b;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	a = i - 1;
	b = a / 2;
	while (b >= 0)
	{
		first = s[a - b];
		last = s[b];
		s[b] = first;
		s[a - b] = last;
		b--;
	}
}
