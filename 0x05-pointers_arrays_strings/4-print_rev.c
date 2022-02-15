#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string passed
 * Return: Your bank account savings
 */

void print_rev(char *s)
{

	int i = 0;
	int strlen;

	while (s[i] != '\0')
	{
		i++;
		strlen  = i;
	}

	for  (; strlen >= 0 ; strlen--)
	{
		_putchar(s[strlen]);
	}
	_putchar(10);
}
