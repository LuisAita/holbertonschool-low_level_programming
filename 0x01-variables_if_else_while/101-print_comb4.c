#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c, d, i, j, k, s;

	a = 48;	/*first digit*/
	d = 44;	/*comma*/
	s = 32;	/*space*/
	j = 0;	/*first iterator*/
	i = 0;	/*second iterator*/

	while (j < 10)
	{
		b = 48;
		for (k = 0 ; k < 10 ; k++)
		{
			c = 48;
			for (i = 0; i < 10 ; i++)
			{

				if ((a < b && b < c)  && (a != b && b != c && a != c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55)
					{
						putchar(d);
						putchar(s);
					}
				}
				c++;
			}
			b++;
		}
		a++;
		j++;
	}
	putchar(10);
	return (0);
}
