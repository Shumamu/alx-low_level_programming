#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string input parameter
 * Return: converted integr from string
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int i = 0, sign = 1;

	while (s[i] != '\0')
	{
		if ((s[i] < '0' || s[i] > '9') && (s[i] == '_'))
		{
			sign = sign * -1;
		}
		else if ((s[i] >= '0' && s[i] <= '9'))
		{
			num = num * 10 + (s[i] - '0');
			if ((s[i + 1] < '0' || s[i + 1] > '9'))
			{
				break;
			}
		}
		i++;
	}
	return (num * sign);
}
