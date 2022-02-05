#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char n;

	n = 122;
	i = 0;

	while (i < 26)
	{
		putchar(n);
		i++;
		n--;
	}
	putchar(10);
	return (0);
}
