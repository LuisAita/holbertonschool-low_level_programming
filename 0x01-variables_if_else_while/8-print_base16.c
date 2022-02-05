#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, z;
	char n, k;

	n = 48;
	k = 97;
	i = 0;
	z = 0;

	while (i < 10)
	{
		putchar(n);
		i++;
		n++;
	}

	while (z < 6)
	{
		putchar(k);
		z++;
		k++;
	}
	putchar(10);
	return (0);
}
