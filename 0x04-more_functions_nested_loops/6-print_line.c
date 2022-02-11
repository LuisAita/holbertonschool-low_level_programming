#include "main.h"

/**
 * print_line - prints straight line 'n' times.
 * @n: times straitgh line is printed.
 * Return: void means no return son!
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
