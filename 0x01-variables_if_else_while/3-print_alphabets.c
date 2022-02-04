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

	n = 97;
	i = 0;
	z = 0;
	k = 65;

	while (i < 26)
	{
		putchar(n);
		i++;
		n++;
	}

	while (z < 26)
	{
		putchar(k);
		z++;
		k++;
	}
	putchar(10);
	return (0);
}
