#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: input- size of line
*/

void print_diagonal(int n)
{
	int i, j;

	j = 0;

	if (n <= 0)
	{
		_putchar(10);
	}
	while (j < n)
	{
		for (i = 0; i <= j; i++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
		j++;
	}
}
