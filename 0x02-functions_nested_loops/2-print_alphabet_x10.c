#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i < 10)
	{
		for (a = 97; a <= 122 ; a++)
		{
			_putchar(a);
		}

		_putchar(10);

		i++;
	}
}
