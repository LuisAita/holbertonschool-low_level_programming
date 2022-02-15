#include "main.h"

/**
 * _strlen - return string length
 *@s: string passed
 *Return: int length
 */

int _strlen(char *s)
{
	int i = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		i++;
		c = i;
	}
	return (c);
}
