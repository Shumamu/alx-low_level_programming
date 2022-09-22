#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: s is the array
 *
 * Return: Always 0
 */


char *rot13(char *str)
{
	int i = 0, k;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 51; k++)
		{
			if (s[k] == str[i])
			{
				str[i] = s1[k];
			}
		}
	}
	return (str);
}
