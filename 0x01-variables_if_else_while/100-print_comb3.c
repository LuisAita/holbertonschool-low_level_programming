#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, i, j, c, s;

	a = 48;
	i = 0;
	j = 0;
	c = 44;
	s = 32;

	while (j < 10)
	{
		b = 48;
	for (i = 0; i < 10 ; i++)
	{
		if (a < b && a != b)
		{
		putchar(a);
		putchar(b);
		putchar(c);
		putchar(s);
		}
		b++;
	}
	a++;
	j++;
	}
	putchar(10);
	return (0);
}
