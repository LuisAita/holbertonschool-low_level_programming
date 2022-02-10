#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @a: The number to be passed.
  *
  * Return: value of last digit of the number
  */
int print_last_digit(int a)
{
	int last_digit;

	last_digit = a % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
