#include "main.h"

/**
 * more_numbers - prints # (0 - 14)*10
 * Return: void
 */
void more_numbers(void)
{
	int i, c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; ch <= 14; c++)
		{
			if (c >= 10)
				_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar(10);
	}
}
