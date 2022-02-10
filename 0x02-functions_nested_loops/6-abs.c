#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @c: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */
int _abs(int a)
{
	if (a < 0)
	{
		int absolute;

		absolute = a * -1;

		return (absolute);
	}

	return (a);
}
