#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, i;

	n = 48;

	for (i = 0 ;  i < 10 ; i++)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
