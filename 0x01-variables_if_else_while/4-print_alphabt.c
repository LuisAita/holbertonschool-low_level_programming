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

	n = 97;
	i = 0;

	while (i < 26)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);

		}
		i++;
		n++;
	}
	putchar(10);
	return (0);
}
