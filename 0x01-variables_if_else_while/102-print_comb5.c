#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, e, f;	/*variables*/
	int c, d;	/*comma and space*/
	int i, j, k, m;	/* iterators */

	a = 48;
	c = 44;
	d = 32;


	for (j = 0; j < 10; j++)
	{
		b = 48;

		for (i = 0; i < 10; i++)
		{
			e = 48;

			for (k = 0; k < 10; k++)
			{
				f = 48;

				for (m = 0; m  < 10; m++)
				{

					if ((a != e || b != f) && (a + b <=  e + f))
					{
						putchar(a);
						putchar(b);
						putchar(d);
						putchar(e);
						putchar(f);

						if (!((a == 57) && (b == 56) && (e == 57) && (f == 57)))
						{
						putchar(c);
						putchar(d);
						}
					}
					f++;
				}
				e++;
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}
