#include "main.h"

/**
 * _strlen - function that get the lenght
 * @s: string passed
 * Return: Your bank account savings
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

/**
 * print_rev - print string in reverse
 * @s : same
 */

void print_rev(char *s)
{

	int a;

	a = _strlen(s);

	for  (a--; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar(10);
}
