#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, z, s;
	char n, k;

	n = 48;
	k = 44;
	s = 32;
	i = 0;
	z = 0;

	while (i < 10)
	{
		putchar(n);
		if (i != 9)
			{
			putchar(k);
			putchar(s);
			}
		i++;
		n++;
	}
	putchar(10);
	return (0);
}
