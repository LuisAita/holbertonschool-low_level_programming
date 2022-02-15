#include "main.h"

/**
 * _puts -  Function that prints a string
 * @str: char array passed
 * Return: el voido
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
