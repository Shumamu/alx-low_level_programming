#include "main.h"

/**
 * _strlen - function that requires the length of a string
 * @s: is is string
 * Return: length of string (value is i)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
